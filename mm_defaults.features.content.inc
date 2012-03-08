<?php
/**
 * @file
 * mm_defaults.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function mm_defaults_content_defaults() {
$content = array();
$content['about-us'] = (object)array(
  'exported_path' => 'content/about-us',
  'title' => 'About Us',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'cm_page',
  'language' => 'und',
  'created' => '1326404835',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'about-us',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Your &quot;About Us&quot; page should include a history of your organization, and some background information on the people who work here.</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Your "About Us" page should include a history of your organization, and some background information on the people who work here.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tags' => array(
    'und' => array(
      0 => array(
        'tid' => '1',
      ),
    ),
  ),
);
$content['cm-footer'] = (object)array(
  'exported_path' => 'content/footer',
  'title' => 'Footer',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'cm_block',
  'language' => 'und',
  'created' => '1330634308',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'cm-footer',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="footer"><div class="cell"><h3>About Cm</h3><p><img alt="" src="/profiles/cm/themes/cm_theme/logo.png" style="width: 70px; height: 81px; " /></p><p><a href="http://minimalmedia.com/products/cm" title="Cm is a web content management system based on Drupal">Cm</a>&nbsp;is a web content management system for businesses and institutions of all shapes and sizes.</p></div><div class="cell"><h3>About Minimal Media</h3><p><a href="http://minimalmedia.com" title="Minimal Media">Minimal Media</a> offers <a href="http://minimalmedia.com/website-implementation">website implementation</a>, <a href="http://minimalmedia.com/consulting">consulting</a>, <a href="http://minimalmedia.com/seo">search engine optimization</a>, <a href="http://minimalmedia.com/managed-hosting">managed hosting</a> and <a href="http://minimalmedia.com/support">support</a> services, specializing in Drupal. Over 10 years of experience in open source software development and web content management. <strong>We use powerful open source tools to implement fast, functional, beautiful websites.</strong></p><address>Minimal Media<br />1034 Fifth Ave.<br />1st Floor<br />Pittsburgh, PA 15219<br /><br />877-664-0221<br />hello@minimalmedia.com</address></div></div>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<div class="footer">
<div class="cell">
<h3>About Cm</h3>
<p><img alt="" src="/profiles/cm/themes/cm_theme/logo.png" style="width: 70px; height: 81px; " /></p>
<p><a href="http://minimalmedia.com/products/cm" title="Cm is a web content management system based on Drupal">Cm</a> is a web content management system for businesses and institutions of all shapes and sizes.</p>
</div>
<div class="cell">
<h3>About Minimal Media</h3>
<p><a href="http://minimalmedia.com" title="Minimal Media">Minimal Media</a> offers <a href="http://minimalmedia.com/website-implementation">website implementation</a>, <a href="http://minimalmedia.com/consulting">consulting</a>, <a href="http://minimalmedia.com/seo">search engine optimization</a>, <a href="http://minimalmedia.com/managed-hosting">managed hosting</a> and <a href="http://minimalmedia.com/support">support</a> services, specializing in Drupal. Over 10 years of experience in open source software development and web content management. <strong>We use powerful open source tools to implement fast, functional, beautiful websites.</strong></p>
<address>Minimal Media<br />1034 Fifth Ave.<br />1st Floor<br />Pittsburgh, PA 15219
<p>877-664-0221<br /><a href="mailto:hello@minimalmedia.com">hello@minimalmedia.com</a></p></address>
</div>
</div>
',
        'safe_summary' => '',
      ),
    ),
  ),
);
$content['contact-form'] = (object)array(
  'exported_path' => 'content/set-contact-form',
  'title' => 'Set up the Contact Form',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'cm_page',
  'language' => 'und',
  'created' => '1326405665',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'contact-form',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>The Contact Form is a built in mechanism that allows users to send a message to site administrators. This can be very important as a lead generation tool on a site for a small business. You can customize the Contact Form so that it provides detailed information about other ways your users can contact you, and you can configure multiple categories of messages and their recipients.</p><h2>Configure the Contact Form</h2><p>From the top menu bar, find Structure &gt; Contact Form.</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>The Contact Form is a built in mechanism that allows users to send a message to site administrators. This can be very important as a lead generation tool on a site for a small business. You can customize the Contact Form so that it provides detailed information about other ways your users can contact you, and you can configure multiple categories of messages and their recipients.</p>
<h2>Configure the Contact Form</h2>
<p>From the top menu bar, find Structure &gt; Contact Form.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tags' => array(
    'und' => array(
      0 => array(
        'tid' => '2',
      ),
      1 => array(
        'tid' => '3',
      ),
      2 => array(
        'tid' => '4',
      ),
    ),
  ),
);
$content['creating-content'] = (object)array(
  'exported_path' => 'content/creating-content',
  'title' => 'Creating Content',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'cm_page',
  'language' => 'und',
  'created' => '1326405299',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'creating-content',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Click Content in the top menu bar then click Add Content. You will see a list of the types of content you can create. Click on Page.</p><p>Enter a Title for your page, then start entering text in the Body. When you&#39;re done, click Save.</p><p>You&#39;ve just created your first piece of content!</p><p>This table describes the different content types available in Cm:</p><table border="1" cellpadding="1" cellspacing="1" style="width: 500px; "><thead><tr><th scope="col">Content Type</th><th scope="col">Description</th></tr></thead><tbody><tr><td>Page</td><td>A static page.</td></tr><tr><td>Article</td><td>A time-sensitive piece of content like a press release.</td></tr><tr><td>Blog Post</td><td>Part of a series of posts organized by their author.</td></tr><tr><td>Panel</td><td>A page with customizable layout characteristics and content.</td></tr><tr><td>Block</td><td>A small piece of content that can be plugged in as a component of other pages.</td></tr><tr><td>Event</td><td>Content associated with a date and time, and presented in a calendar format.</td></tr><tr><td>Rotator Item</td><td>An item that appears in the Rotator.</td></tr><tr><td>Webform</td><td>A customizable survey presented to visitors as a form.</td></tr></tbody></table><p>&nbsp;</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Click Content in the top menu bar then click Add Content. You will see a list of the types of content you can create. Click on Page.</p>
<p>Enter a Title for your page, then start entering text in the Body. When you\'re done, click Save.</p>
<p>You\'ve just created your first piece of content!</p>
<p>This table describes the different content types available in Cm:</p>
<table border="1" cellpadding="1" cellspacing="1" style="width: 500px; "><thead><tr><th scope="col">Content Type</th>
<th scope="col">Description</th>
</tr></thead><tbody><tr><td>Page</td>
<td>A static page.</td>
</tr><tr><td>Article</td>
<td>A time-sensitive piece of content like a press release.</td>
</tr><tr><td>Blog Post</td>
<td>Part of a series of posts organized by their author.</td>
</tr><tr><td>Panel</td>
<td>A page with customizable layout characteristics and content.</td>
</tr><tr><td>Block</td>
<td>A small piece of content that can be plugged in as a component of other pages.</td>
</tr><tr><td>Event</td>
<td>Content associated with a date and time, and presented in a calendar format.</td>
</tr><tr><td>Rotator Item</td>
<td>An item that appears in the Rotator.</td>
</tr><tr><td>Webform</td>
<td>A customizable survey presented to visitors as a form.</td>
</tr></tbody></table><p> </p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tags' => array(
    'und' => array(
      0 => array(
        'tid' => '2',
      ),
      1 => array(
        'tid' => '3',
      ),
    ),
  ),
);
$content['features-overview'] = (object)array(
  'exported_path' => 'content/features-overview',
  'title' => 'Features Overview',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'cm_page',
  'language' => 'und',
  'created' => '1326402550',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'features-overview',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<ul><li>Flexible Publishing Workflow</li><li>Taxonomy</li><li>User Registration and Profiles</li><li>Events Calendar</li><li>Blog</li><li>Contact Form</li><li>Photo Gallery</li><li>SEO</li></ul>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<ul><li>Flexible Publishing Workflow</li>
<li>Taxonomy</li>
<li>User Registration and Profiles</li>
<li>Events Calendar</li>
<li>Blog</li>
<li>Contact Form</li>
<li>Photo Gallery</li>
<li>SEO</li>
</ul>',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tags' => array(
    'und' => array(
      0 => array(
        'tid' => '2',
      ),
    ),
  ),
);
$content['front-page'] = (object)array(
  'exported_path' => 'content/front-page',
  'title' => 'Front Page',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'cm_panel',
  'language' => 'und',
  'created' => '1328039174',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'front-page',
);
$content['sample-blog-post'] = (object)array(
  'exported_path' => 'content/about-nice-weather-were-having',
  'title' => 'About this nice weather we\'re having.',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'blog',
  'language' => 'und',
  'created' => '1330482707',
  'comment' => '2',
  'translate' => '0',
  'machine_name' => 'sample-blog-post',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>This is a sample blog post. Blog posts are characterized by their time-sensitivity, attribution to a particular author, informal tone, and integration with social sharing and interaction features.</p><p>By default, comments are enabled on blog posts, and your username will be attributed as the author.</p><p>To create a new blog post, <a href="/node/add/blog">click here</a>.</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>This is a sample blog post. Blog posts are characterized by their time-sensitivity, attribution to a particular author, informal tone, and integration with social sharing and interaction features.</p>
<p>By default, comments are enabled on blog posts, and your username will be attributed as the author.</p>
<p>To create a new blog post, <a href="/node/add/blog">click here</a>.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
);
$content['using-taxonomy'] = (object)array(
  'exported_path' => 'content/using-taxonomy',
  'title' => 'Using Taxonomy',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'cm_page',
  'language' => 'und',
  'created' => '1326402647',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'using-taxonomy',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><a href="http://drupal.org/node/1146844">Taxonomy</a>&nbsp;is a system of categorization that describes the content on your site. A collection of related terms is called a Vocabulary. You can add or change terms in Cm&#39;s built-in vocabulary, or you can create your own.</p><h2>View Taxonomy Terms</h2><p>From the top menu bar, Go to Structure &gt; Taxonomy. You will see a list of vocabularies, along with the option to add a new one. Tags is the default vocabulary provided by Cm.</p><h2>See Also</h2><ol><li><a href="http://drupal.org/handbook/modules/taxonomy">Taxonomy handbook page from drupal.org</a></li></ol>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p><a href="http://drupal.org/node/1146844">Taxonomy</a> is a system of categorization that describes the content on your site. A collection of related terms is called a Vocabulary. You can add or change terms in Cm\'s built-in vocabulary, or you can create your own.</p>
<h2>View Taxonomy Terms</h2>
<p>From the top menu bar, Go to Structure &gt; Taxonomy. You will see a list of vocabularies, along with the option to add a new one. Tags is the default vocabulary provided by Cm.</p>
<h2>See Also</h2>
<ol><li><a href="http://drupal.org/handbook/modules/taxonomy">Taxonomy handbook page from drupal.org</a></li>
</ol>',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tags' => array(
    'und' => array(
      0 => array(
        'tid' => '2',
      ),
      1 => array(
        'tid' => '4',
      ),
    ),
  ),
);
$content['welcome-to-cm'] = (object)array(
  'exported_path' => 'content/welcome-cm',
  'title' => 'Welcome to Cm',
  'status' => '1',
  'promote' => '1',
  'sticky' => '0',
  'type' => 'cm_page',
  'language' => 'und',
  'created' => '1330481683',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'welcome-to-cm',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h2>What is Cm?</h2><p>Cm is a Web content management platform that can be used to build a variety of websites, for institutions of all shapes and sizes.</p><h2>What can I do with Cm?</h2><p>Anything <a href="http://drupal.org">Drupal</a> can do. And some additional things Drupal can&#39;t do without installing and configuring some extra modules. Things like:</p><ul><li>Image Rotator</li><li>Rich text editor</li><li>Custom CSS and Javascript per-page</li><li>Flexible, scalable workflow: Manage a whole team of editors</li><li>Highly customizable section front layouts</li><li>Easily optimize your on-page SEO</li></ul><h2>How do I find out more?</h2><p>You are looking at a self-documenting demo site. Register and log in for editor access, and you can edit any page on this site, <a href="/node/1/edit">including this one</a>. The site is restored to it&#39;s original state every few hours. To request a dedicated demo site for your project, <a href="http://minimalmedia.com/contact">contact us</a>.</p><h2>Can you build a site for me, based on Cm?</h2><p>Yes. <a href="http://minimalmedia.com/quote">Tell us more</a> about what you need, and we&#39;ll provide you with a quote for implementation and hosting services.</p><h2>I&#39;m a Drupal rockstar. Can I build a site myself, based on Cm?</h2><p>Yes. Cm is open source software. You can get started <a href="https://github.com/minimalmedia/Cm">here</a>.</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<h2>What is Cm?</h2>
<p>Cm is a Web content management platform that can be used to build a variety of websites, for institutions of all shapes and sizes.</p>
<h2>What can I do with Cm?</h2>
<p>Anything <a href="http://drupal.org">Drupal</a> can do. And some additional things Drupal can\'t do without installing and configuring some extra modules. Things like:</p>
<ul><li>Image Rotator</li>
<li>Rich text editor</li>
<li>Custom CSS and Javascript per-page</li>
<li>Flexible, scalable workflow: Manage a whole team of editors</li>
<li>Highly customizable section front layouts</li>
<li>Easily optimize your on-page SEO</li>
</ul><h2>How do I find out more?</h2>
<p>You are looking at a self-documenting demo site. Register and log in for editor access, and you can edit any page on this site, <a href="/node/1/edit">including this one</a>. The site is restored to it\'s original state every few hours. To request a dedicated demo site for your project, <a href="http://minimalmedia.com/contact">contact us</a>.</p>
<h2>Can you build a site for me, based on Cm?</h2>
<p>Yes. <a href="http://minimalmedia.com/quote">Tell us more</a> about what you need, and we\'ll provide you with a quote for implementation and hosting services.</p>
<h2>I\'m a Drupal rockstar. Can I build a site myself, based on Cm?</h2>
<p>Yes. Cm is open source software. You can get started <a href="https://github.com/minimalmedia/Cm">here</a>.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tags' => array(
    'und' => array(
      0 => array(
        'tid' => '3',
      ),
    ),
  ),
);
return $content;
}
