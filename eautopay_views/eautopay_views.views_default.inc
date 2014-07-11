<?php


function eautopay_views_views_default_views() {
  $views = array();
  $view = new view();
  $view->name = 'e_autopay_orders';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'epay_orders';
  $view->human_name = 'E-autopay orders';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Заказы';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'ещё';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view own unpublished content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Применить';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Сбросить';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Сортировать по';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'По возрастанию';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'По убыванию';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Элементов на страницу';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Все -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Пропустить';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« первая';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ предыдущая';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'следующая ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'последняя »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'oid' => 'oid',
    'product_name' => 'product_name',
    'product_qty' => 'product_qty',
    'product_price' => 'product_price',
    'currency' => 'currency',
    'order_date' => 'order_date',
    'pay_method' => 'pay_method',
  );
  $handler->display->display_options['style_options']['default'] = 'oid';
  $handler->display->display_options['style_options']['info'] = array(
    'oid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'product_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'product_qty' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'product_price' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'currency' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'order_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'pay_method' => array(
      'sortable' => 1,
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
  /* Поле: Пользователь: Имя */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* Поле: Пользователь: E-mail адрес */
  $handler->display->display_options['fields']['field_epay_email']['id'] = 'field_epay_email';
  $handler->display->display_options['fields']['field_epay_email']['table'] = 'field_data_field_epay_email';
  $handler->display->display_options['fields']['field_epay_email']['field'] = 'field_epay_email';
  $handler->display->display_options['fields']['field_epay_email']['relationship'] = 'uid';
  /* Поле: Пользователь: Country */
  $handler->display->display_options['fields']['field_epay_country']['id'] = 'field_epay_country';
  $handler->display->display_options['fields']['field_epay_country']['table'] = 'field_data_field_epay_country';
  $handler->display->display_options['fields']['field_epay_country']['field'] = 'field_epay_country';
  $handler->display->display_options['fields']['field_epay_country']['relationship'] = 'uid';
  /* Поле: Пользователь: City */
  $handler->display->display_options['fields']['field_epay_city']['id'] = 'field_epay_city';
  $handler->display->display_options['fields']['field_epay_city']['table'] = 'field_data_field_epay_city';
  $handler->display->display_options['fields']['field_epay_city']['field'] = 'field_epay_city';
  $handler->display->display_options['fields']['field_epay_city']['relationship'] = 'uid';
  /* Поле: E-autopay orders: IP */
  $handler->display->display_options['fields']['ip']['id'] = 'ip';
  $handler->display->display_options['fields']['ip']['table'] = 'epay_orders';
  $handler->display->display_options['fields']['ip']['field'] = 'ip';
  /* Поле: E-autopay orders: Order ID */
  $handler->display->display_options['fields']['oid']['id'] = 'oid';
  $handler->display->display_options['fields']['oid']['table'] = 'epay_orders';
  $handler->display->display_options['fields']['oid']['field'] = 'oid';
  $handler->display->display_options['fields']['oid']['separator'] = '';
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

  /* Display: Orders in user profile */
  $handler = $view->new_display('page', 'Orders in user profile', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: E-autopay orders: Order ID */
  $handler->display->display_options['fields']['oid']['id'] = 'oid';
  $handler->display->display_options['fields']['oid']['table'] = 'epay_orders';
  $handler->display->display_options['fields']['oid']['field'] = 'oid';
  $handler->display->display_options['fields']['oid']['separator'] = '';
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
  $handler->display->display_options['path'] = 'user/%/orders';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'E-autopay orders';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: All orders */
  $handler = $view->new_display('page', 'All orders', 'all_orders');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer site configuration';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: E-autopay orders: Order ID */
  $handler->display->display_options['fields']['oid']['id'] = 'oid';
  $handler->display->display_options['fields']['oid']['table'] = 'epay_orders';
  $handler->display->display_options['fields']['oid']['field'] = 'oid';
  $handler->display->display_options['fields']['oid']['separator'] = '';
  /* Поле: Пользователь: Имя */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* Поле: Пользователь: E-mail адрес */
  $handler->display->display_options['fields']['field_epay_email']['id'] = 'field_epay_email';
  $handler->display->display_options['fields']['field_epay_email']['table'] = 'field_data_field_epay_email';
  $handler->display->display_options['fields']['field_epay_email']['field'] = 'field_epay_email';
  $handler->display->display_options['fields']['field_epay_email']['relationship'] = 'uid';
  /* Поле: Пользователь: Country */
  $handler->display->display_options['fields']['field_epay_country']['id'] = 'field_epay_country';
  $handler->display->display_options['fields']['field_epay_country']['table'] = 'field_data_field_epay_country';
  $handler->display->display_options['fields']['field_epay_country']['field'] = 'field_epay_country';
  $handler->display->display_options['fields']['field_epay_country']['relationship'] = 'uid';
  /* Поле: Пользователь: City */
  $handler->display->display_options['fields']['field_epay_city']['id'] = 'field_epay_city';
  $handler->display->display_options['fields']['field_epay_city']['table'] = 'field_data_field_epay_city';
  $handler->display->display_options['fields']['field_epay_city']['field'] = 'field_epay_city';
  $handler->display->display_options['fields']['field_epay_city']['relationship'] = 'uid';
  /* Поле: E-autopay orders: IP */
  $handler->display->display_options['fields']['ip']['id'] = 'ip';
  $handler->display->display_options['fields']['ip']['table'] = 'epay_orders';
  $handler->display->display_options['fields']['ip']['field'] = 'ip';
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'admin/config/system/eautopay/orders';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Orders';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['e_autopay_orders'] = array(
    t('Master'),
    t('Заказы'),
    t('ещё'),
    t('Применить'),
    t('Сбросить'),
    t('Сортировать по'),
    t('По возрастанию'),
    t('По убыванию'),
    t('Элементов на страницу'),
    t('- Все -'),
    t('Пропустить'),
    t('« первая'),
    t('‹ предыдущая'),
    t('следующая ›'),
    t('последняя »'),
    t('ID Пользователя'),
    t('Имя'),
    t('E-mail адрес'),
    t('Country'),
    t('City'),
    t('IP'),
    t('Order ID'),
    t('.'),
    t('Product name'),
    t('Product quantity'),
    t(' '),
    t('Product price'),
    t('Currency'),
    t('Order date'),
    t('Pay method'),
    t('Все'),
    t('Orders in user profile'),
    t('more'),
    t('All orders'),
  );

  $views[$view->name] = $view;
  return $views;
}


