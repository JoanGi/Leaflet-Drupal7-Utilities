# leaflet-drupal
Useful repositories to fast use leaflet with Drupal

In this repository, we just found the necessary modules, libraries and the configuration to fast set a leaflet maps showed in views.

A content type called "draw" it's created. This have a Leaflet field with a specific widget that allows the user to set a point, a line or a Polygon in the map. 

Every instance of this content type could be a point, line o draw in the map.

The map it's shown in a View call "maps". Just en example of how to display the map. This view show al de results
 of the instance of de "draw" content type. 
 
 With view filters, and setting more fields in de content type, you will be able to filter the resulta. With contextual filter, or exposed filters user will be able to filter de results.
 
 To do; Front-end of the map.
        Allow multiple content-type
        Diferent colors depending of the content type
        Allow using more maps (leaflet_moremaps).
