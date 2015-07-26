<?php
/**
 * @file
 * features_resteasy_artist.features.inc
 */

/**
 * Implements hook_node_info().
 */
function features_resteasy_artist_node_info() {
  $items = array(
    'artist' => array(
      'name' => t('Artist'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => t('Please enter in a band or solo artist\'s name.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
