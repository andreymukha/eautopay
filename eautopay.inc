<?php

function _eautopay_installed_fields(){

  $t = get_t();

  return array(
    'field_epay_first_name' => array(
      'field_name' => 'field_epay_first_name',
      'type' => 'text',
      'label' => $t('First name'),
    ),
    'field_epay_last_name' => array(
      'field_name' => 'field_epay_last_name',
      'type' => 'text',
      'label' => $t('Last name')
    ),
    'field_epay_middle_name' => array(
      'field_name' => 'field_epay_middle_name',
      'type' => 'text',
      'label' => $t('Middle name')
    ),
    'field_epay_email' => array(
      'field_name' => 'field_epay_email',
      'type' => 'text',
      'label' => $t('Email address')
    ),
    'field_epay_phone' => array(
      'field_name' => 'field_epay_phone',
      'type' => 'text',
      'label' => $t('Phone number')
    ),
    'field_epay_phone2' => array(
      'field_name' => 'field_epay_phone2',
      'type' => 'text',
      'label' => $t('Phone number 2')
    ),
    'field_epay_city' => array(
      'field_name' => 'field_epay_city',
      'type' => 'text',
      'label' => $t('City')
    ),
    'field_epay_country' => array(
      'field_name' => 'field_epay_country',
      'type' => 'text',
      'label' => $t('Country')
    ),
    'field_epay_address' => array(
      'field_name' => 'field_epay_address',
      'type' => 'text',
      'label' => $t('Address')
    ),
    'field_epay_region' => array(
      'field_name' => 'field_epay_region',
      'type' => 'text',
      'label' => $t('Region')
    ),
    'field_epay_postalcode' => array(
      'field_name' => 'field_epay_postalcode',
      'type' => 'text',
      'label' => $t('Postal code')
    ),
  );

}