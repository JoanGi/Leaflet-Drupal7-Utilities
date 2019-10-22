# Drupal 7 - Leaflet guide

Useful repositories to fast use leaflet with Drupal

In this repository, we just found the necessary modules, libraries and the configuration to set a leaflet map showed in views fastly.

A content type called "draw" it's created. This content-type have a Leaflet field with a specific widget that allows the user/editor to set a point, a line or a Polygon in the map in every instance created.

The map it's shown in a View called "maps". Beeing this view just an example of how to display the map. This view show all de results of the instances of "draw" content type. 
 
Setting more fields in de content type and using views filter you will be able to filter the results. With contextual filter, or exposed filters users will be able to filter de results.
 
## Install instructions; 

` git clone https://github.com/JoanGi/leaflet-drupal ` in site/all

Move de module leaflet_utility to /modules and the js libraries to /libraries.

Enable the leaflet_utility with drush to resolve dependencies. 

` drush en leaflet_utility ` 

Now, you are able to create "draw" content type. and check de url /mapa to see the view example.

Note; create a blocki instance of the view to set the map everywhere you want.

Enjoy!

## To do; 

1. Front-end of the map.
2. Allow multiple content type
3. Draw lines and regions
