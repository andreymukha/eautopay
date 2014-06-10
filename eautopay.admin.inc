<?php

function eautopay_get_pay_data_form (){

  global $base_url;

  $form['eautopay_post_link'] = array(
    '#title' => t('Ссылка на страницу, которая будет принимать POST данные'),
    '#description' => t('Ссылка вставляется в e-autopay  в уведомлениях'),
    '#type' => 'textfield',
    '#size' => 60,
    '#maxlength' => 128,
  );

  if(variable_get('eautopay_link')){
    $form['eautopay_post_link']['#default_value'] = variable_get('eautopay_link');
  }else{
    $form['eautopay_post_link']['#default_value'] = $base_url.'/eautopay/'.user_password(6);
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
  drupal_set_message('Ссылка '.l(variable_get('eautopay_link'), variable_get('eautopay_link')).' успешна сохранена');
}