<div class="bean-wysiwyg" <?php print $attributes; ?>>

  <?php print render($title_suffix) ?>

  <?php if ($bean->title !== ''): ?>
    <h2><?php print $title; ?></h2>
  <?php endif; ?>

  <?php print $bean->field_body['und'][0]['value']; ?>

</div>