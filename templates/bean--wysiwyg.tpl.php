<div class="bean-wysiwyg clearfix" <?php print $attributes; ?>>

  <?php print render($title_suffix) ?>

  <?php if (isset($bean->field_body['und'][0]['value'])) { print $bean->field_body['und'][0]['value']; } ?>

</div>
