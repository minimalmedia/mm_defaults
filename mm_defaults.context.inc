<?php
/**
 * @file
 * mm_defaults.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mm_defaults_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front';
  $context->description = 'The front page.';
  $context->tag = 'cm';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-rotator-block_1' => array(
          'module' => 'views',
          'delta' => 'rotator-block_1',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('The front page.');
  t('cm');
  $export['front'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front-user-anonymous';
  $context->description = 'The front page, while the user is anonymous.';
  $context->tag = 'cm';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'front' => 'front',
        'user-anonymous' => 'user-anonymous',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('The front page, while the user is anonymous.');
  t('cm');
  $export['front-user-anonymous'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'interior';
  $context->description = 'All pages that are not the front page.';
  $context->tag = 'cm';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~front' => '~front',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('All pages that are not the front page.');
  t('cm');
  $export['interior'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = 'Sitewide context';
  $context->tag = 'cm';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'twitter_pull-0' => array(
          'module' => 'twitter_pull',
          'delta' => 0,
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'blog-recent' => array(
          'module' => 'blog',
          'delta' => 'recent',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'mm_defaults-mini_contact_form' => array(
          'module' => 'mm_defaults',
          'delta' => 'mini_contact_form',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'header',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'header',
          'weight' => '-10',
        ),
        'nodeblock-cm-footer' => array(
          'module' => 'nodeblock',
          'delta' => 'cm-footer',
          'region' => 'bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sitewide context');
  t('cm');
  $export['sitewide'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user-administrator';
  $context->description = 'The current user is an administrator.';
  $context->tag = 'cm';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'administrator' => 'administrator',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('The current user is an administrator.');
  t('cm');
  $export['user-administrator'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user-anonymous';
  $context->description = 'The current user is anonymous.';
  $context->tag = 'cm';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('The current user is anonymous.');
  t('cm');
  $export['user-anonymous'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user-authenticated';
  $context->description = 'The current user is logged in.';
  $context->tag = 'cm';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('The current user is logged in.');
  t('cm');
  $export['user-authenticated'] = $context;

  return $export;
}
