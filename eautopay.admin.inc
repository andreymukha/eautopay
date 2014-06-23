<?php

function eautopay_get_pay_data_form (){

  global $base_url;

  if(!variable_get('eautopay_link')){
    drupal_set_message('Внимание! Если вы не сохраняли данные из полей, то сделайте это.', 'warning');
  }

  $form['eautopay_post_link'] = array(
    '#title' => t('Ссылка на страницу, которая будет принимать POST данные'),
    '#description' => t('Ссылка вставляется в e-autopay - в уведомлениях'),
    '#type' => 'textfield',
    '#size' => 60,
    '#maxlength' => 128,
  );

  $form['eautopay_secret_key'] = array(
    '#title' => t('Секретный ключ'),
    '#description' => t('Вставьте этот секретный ключ в одноимённое поле в аккаунте e-autopay в уведомлении к вашему товару'),
    '#type' => 'textfield',
    '#size' => 60,
    '#maxlength' => 128,
  );

  if(variable_get('eautopay_link')){
    $form['eautopay_post_link']['#default_value'] = variable_get('eautopay_link');
  }else{
    $form['eautopay_post_link']['#default_value'] = $base_url.'/eautopay/'.user_password(6);
  }

  if(variable_get('eautopay_secret_key')){
    $form['eautopay_secret_key']['#default_value'] = variable_get('eautopay_secret_key');
  }else{
    $form['eautopay_secret_key']['#default_value'] = user_password(30);
  }

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );

  return $form;
}

function eautopay_get_pay_data_form_validate (&$form, &$form_state){
  if(!valid_url($form_state['values']['eautopay_post_link'], true)){
    form_set_error($form_state['values']['eautopay_post_link'], t('В поле должна быть введена только ссылка'));
  }
}

function eautopay_get_pay_data_form_submit (&$form, &$form_state){
  variable_set('eautopay_link', check_url(check_plain(filter_xss($form_state['values']['eautopay_post_link'], array()))));
  variable_set('eautopay_secret_key', check_plain(filter_xss($form_state['values']['eautopay_secret_key'], array())));
  drupal_set_message('Ссылка '.l(variable_get('eautopay_link'), variable_get('eautopay_link'), array('attributes' => array('target' => '_blank'))).' успешна сохранена');
  drupal_set_message('Секретный ключ <b>'.variable_get('eautopay_secret_key').'</b> успешна сохранён');
}