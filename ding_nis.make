core = 7.x
api = 2

projects[field_slideshow][subdir] = "contrib"
projects[field_slideshow][version] = "1.82"

projects[colorbox][subdir] = "contrib"
projects[colorbox][version] = "2.13"

libraries[colorbox][download][type] = "get"
libraries[colorbox][download][url] =  "https://github.com/jackmoore/colorbox/archive/1.x.zip"
libraries[colorbox][directory_name] = "colorbox"
libraries[colorbox][destination] = "libraries"

libraries[jquery.cycle][download][type] = "git"
libraries[jquery.cycle][download][url] =  "https://github.com/malsup/cycle.git"
libraries[jquery.cycle][download][tag] = "3.0.3"
libraries[jquery.cycle][directory_name] = "jquery.cycle"
libraries[jquery.cycle][destination] = "libraries"
