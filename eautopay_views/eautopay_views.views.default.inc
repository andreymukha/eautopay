<?php


function eautopay_views_views_default_views() {
  $views = array();

  $view = new view();
  $view->name = 'e_autopay_orders_in_user_profile';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'epay_orders';
  $view->human_name = 'E-autopay orders in user profile';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view own unpublished content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Сбросить';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« первая';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ предыдущая';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'следующая ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'последняя »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'oid' => 'oid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'oid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: E-autopay orders: Relationship with user */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'epay_orders';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Поле: E-autopay orders: Order ID */
  $handler->display->display_options['fields']['oid']['id'] = 'oid';
  $handler->display->display_options['fields']['oid']['table'] = 'epay_orders';
  $handler->display->display_options['fields']['oid']['field'] = 'oid';
  /* Поле: E-autopay orders: Product name */
  $handler->display->display_options['fields']['product_name']['id'] = 'product_name';
  $handler->display->display_options['fields']['product_name']['table'] = 'epay_orders';
  $handler->display->display_options['fields']['product_name']['field'] = 'product_name';
  /* Поле: E-autopay orders: Product quantity */
  $handler->display->display_options['fields']['product_qty']['id'] = 'product_qty';
  $handler->display->display_options['fields']['product_qty']['table'] = 'epay_orders';
  $handler->display->display_options['fields']['product_qty']['field'] = 'product_qty';
  $handler->display->display_options['fields']['product_qty']['separator'] = ' ';
  /* Поле: E-autopay orders: Product price */
  $handler->display->display_options['fields']['product_price']['id'] = 'product_price';
  $handler->display->display_options['fields']['product_price']['table'] = 'epay_orders';
  $handler->display->display_options['fields']['product_price']['field'] = 'product_price';
  $handler->display->display_options['fields']['product_price']['separator'] = ' ';
  /* Поле: E-autopay orders: Currency */
  $handler->display->display_options['fields']['currency']['id'] = 'currency';
  $handler->display->display_options['fields']['currency']['table'] = 'epay_orders';
  $handler->display->display_options['fields']['currency']['field'] = 'currency';
  /* Поле: E-autopay orders: Order date */
  $handler->display->display_options['fields']['order_date']['id'] = 'order_date';
  $handler->display->display_options['fields']['order_date']['table'] = 'epay_orders';
  $handler->display->display_options['fields']['order_date']['field'] = 'order_date';
  $handler->display->display_options['fields']['order_date']['date_format'] = 'short';
  $handler->display->display_options['fields']['order_date']['second_date_format'] = 'long';
  /* Поле: E-autopay orders: Pay method */
  $handler->display->display_options['fields']['pay_method']['id'] = 'pay_method';
  $handler->display->display_options['fields']['pay_method']['table'] = 'epay_orders';
  $handler->display->display_options['fields']['pay_method']['field'] = 'pay_method';
  /* Contextual filter: Пользователь: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Все';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';

  /* Display: Страница */
  $handler = $view->new_display('page', 'Страница', 'page_1');
  $handler->display->display_options['path'] = 'user/%/orders';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'E-autopay orders';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['e_autopay_orders_in_user_profile'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Сбросить'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« первая'),
    t('‹ предыдущая'),
    t('следующая ›'),
    t('последняя »'),
    t('ID Пользователя'),
    t('Order ID'),
    t('.'),
    t(','),
    t('Product name'),
    t('Product quantity'),
    t(' '),
    t('Product price'),
    t('Currency'),
    t('Order date'),
    t('Pay method'),
    t('Все'),
    t('Страница'),
  );

  $views['e_autopay_orders_in_user_profile'] = $view;

  return $views;
}


