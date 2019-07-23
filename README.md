# Ding Nodes Image Slideshow
This module alters default Ding News and Ding Event CT's **title_image** field
and adding additional field called 'Title image display mode' to processed CT's which will allow to choose between Slideshow 
and List  view's for title image. This can be done per node or can be changed globally from '/admin/config/media/ding_nis' page.
Also this module is allowing multiple images to be added to one field.

## Requirements
* jQuery Cycle Plugin (http://jquery.malsup.com/cycle/)
* Field Slideshow module (https://www.drupal.org/project/field_slideshow)

## Installation
1. Go to /admin/modules page and enable **Ding Nodes Image Slideshow** module.
2. On '/admin/config/media/ding_nis' check default view mode which will be used for title images. Default is "Slideshow".
