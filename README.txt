Description
-----------
These modules allows users to access the site on mobile phones and
tablets. The modules provide mobile friendly renderings of user
library status, searches, events and news.

Additionally, the ding_mobile_images module can be used to have
separate images for the mobile site, in case the list_image isn't
appropriate. It alters the views provided by the other modules to use
the new field instead.

Installation
------------
Enable the features and mobile tools:
  * ding_mobile
  * ding_mobile_events
  * ding_mobile_news
  * ting_search_mobile
  * mobile_tools

When you enable the mobile features, their state will be overridden on
the features administration pages. This is due to the fact that these
features comes with panels variants and features wants these variants
to be part of the feature that has the actually panel definition.

So all mobile features, ding_content and ding_events will have the
status overridden. If you need to recreate any of these features, you
have to manually ensure that these variants don't get into the wrong
features.

Configuration
-------------
First go into mobile tools (admin/settings/mobile-tools) and set which
urls should be use to display the mobile version and which should be
use for the desktop version.

Next go to admin/settings/mobile-tools/themes to select which theme
should be used for the mobile version of the site. Only active themes
will be avaliable.

Next go to block (admin/build/block) settings for your mobile theme
and change the block settings for "Ting search box", to not show the
block title.

Troubleshooting
---------------
Q: Mobile front page, shows desktop version?
A: Make sure that the mobile theme is actived and selected under
   mobile tools

Q: Showing mobile theme with desktop front page content?
A: Go into admin/build/pages/edit/page-front_panel select Content tab
   and press "Update and Save". Then revert the panel, so that is
   re-reads the panel form code. It should contain to variants: Mobile
   and panel.

Q: Search is not working?
A: Make sure that ting_search_mobile module have be enabled.
