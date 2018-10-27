#!/bin/bash
find . -name "*.out" -type f -delete
find . -name "*~" -type f -delete
chown -R apache:apache *
sudo -u apache php /var/www/html/owncloud/occ files:scan --path=mc
