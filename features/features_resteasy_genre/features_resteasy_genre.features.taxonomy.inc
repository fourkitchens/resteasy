<?php
/**
 * @file
 * features_resteasy_genre.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function features_resteasy_genre_taxonomy_default_vocabularies() {
  return array(
    'taxonomy_genre' => array(
      'name' => 'Genre',
      'machine_name' => 'taxonomy_genre',
      'description' => 'Musical Genres',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
