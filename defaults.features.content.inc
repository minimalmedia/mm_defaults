<?php
/**
 * @file
 * defaults.features.content.inc
 */

/**
 * Implementation of hook_content_defaults().
 */
function defaults_content_defaults() {
$content = array();
$content['features'] = (object)array(
  'exported_path' => 'content/features-overview',
  'title' => 'Features Overview',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'page',
  'language' => 'und',
  'created' => '1325011195',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'features',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Flexible Publishing Workflow
Taxonomy
User Registration and Profiles
Events Calendar
Blog
Contact Form
Photo Gallery
SEO',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Flexible Publishing Workflow<br />
Taxonomy<br />
User Registration and Profiles<br />
Events Calendar<br />
Blog<br />
Contact Form<br />
Photo Gallery<br />
SEO</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
);
$content['taxonomy'] = (object)array(
  'exported_path' => 'content/using-taxonomy',
  'title' => 'Using Taxonomy',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'page',
  'language' => 'und',
  'created' => '1325011232',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'taxonomy',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Taxonomy is a system of categorization that describes the content on your site. You can add or change terms in Cm&#39;s built-in system, or you can create your own, called a Vocabulary.</p><p>From the top menu bar, find Content Management &gt; Taxonomy. You will see a list of vocabularies. Category is the default provided by Cm.</p><p>Taxonomy handbook page from drupal.org: http://drupal.org/handbook/modules/taxonomy</p>',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Taxonomy is a system of categorization that describes the content on your site. You can add or change terms in Cm\'s built-in system, or you can create your own, called a Vocabulary.From the top menu bar, find Content Management &gt; Taxonomy. You will see a list of vocabularies. Category is the default provided by Cm.Taxonomy handbook page from drupal.org: <a href="http://drupal.org/handbook/modules/taxonomy">http://drupal.org/handbook/modules/taxonomy</a></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
);
$content['welcome'] = (object)array(
  'exported_path' => 'content/welcome',
  'title' => 'Welcome',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'page',
  'language' => 'und',
  'created' => '1325010832',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'welcome',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h2>What is Cm?</h2><p>Cm is a Web content management platform that can be used to build a variety of websites, for institutions of all shapes and sizes.</p><h2>What can I do with Cm?</h2><p>Anything <a href="http://drupal.org">Drupal</a> can do. And some additional things Drupal can&#39;t do without installing and configuring some extra modules. Things like:</p><ul><li>Freely customizable user profiles</li><li>Rich text editor</li><li>Flexible, scalable workflow: Manage a whole team of editors</li><li>Create custom section front layouts</li><li>Easily optimize your on-page SEO</li></ul><h2>How do I find out more?</h2><p>You are looking at our self-documenting demo site. Register and log in for editor access, and you can edit any page on this site, <a href="/node/1/edit">including this one</a>. The site is restored to it&#39;s original state every few hours. To request a dedicated demo site for your project, <a href="http://minimalmedia.com/contact">contact us</a>.</p><h2>Can you build a site for me, based on Cm?</h2><p>Yes. <a href="http://minimalmedia.com/quote">Tell us more</a> about what you need, and we&#39;ll provide you with a quote for implementation and hosting services.</p><h2>I&#39;m a Drupal rockstar. Can I build a site myself, based on Cm?</h2><p>Yes. Cm is open source software. You can get started <a href="https://github.com/minimalmedia/Cm">here</a>.</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<h2>What is Cm?</h2>
<p>Cm is a Web content management platform that can be used to build a variety of websites, for institutions of all shapes and sizes.</p>
<h2>What can I do with Cm?</h2>
<p>Anything <a href="http://drupal.org">Drupal</a> can do. And some additional things Drupal can\'t do without installing and configuring some extra modules. Things like:</p>
<ul><li>Freely customizable user profiles</li>
<li>Rich text editor</li>
<li>Flexible, scalable workflow: Manage a whole team of editors</li>
<li>Create custom section front layouts</li>
<li>Easily optimize your on-page SEO</li>
</ul><h2>How do I find out more?</h2>
<p>You are looking at our self-documenting demo site. Register and log in for editor access, and you can edit any page on this site, <a href="/node/1/edit">including this one</a>. The site is restored to it\'s original state every few hours. To request a dedicated demo site for your project, <a href="http://minimalmedia.com/contact">contact us</a>.</p>
<h2>Can you build a site for me, based on Cm?</h2>
<p>Yes. <a href="http://minimalmedia.com/quote">Tell us more</a> about what you need, and we\'ll provide you with a quote for implementation and hosting services.</p>
<h2>I\'m a Drupal rockstar. Can I build a site myself, based on Cm?</h2>
<p>Yes. Cm is open source software. You can get started <a href="https://github.com/minimalmedia/Cm">here</a>.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
);
return $content;
}
