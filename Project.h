/* Project.h - Basic Project Information Library
 * 
 * Author: Márcio Pessoa <marcio.pessoa@sciemon.com>
 * Contributors: none
 * 
 * Change log
 * 2016-04-23
 *         * compiled
 *         added compilation date method.
 * 
 * 2015-10-04
 *         * version
 *         added project name to string description.
 * 
 * 2015-01-22
 *         * Project
 *         removed default strings.
 * 
 * 2014-11-16
 *         * Project
 *         changed variables String type to char type.
 * 
 * 2014-07-06
 *         Experimental version.
 */

#ifndef Project_h
#define Project_h

#include "Arduino.h"

class Project
{
  public:
    Project(char *platform, char *mark, char *name,
            char *version, char *version_date,
            char *serial_number,
            char *owner,
            char *license,
            char *website,
            char *contact);
    String version();
    String owner();
    String license();
    String website();
    String contact();
    String compiled();
    void reset();
  private:
    char *_platform;
    char *_mark;
    char *_name;
    char *_version;
    char *_version_date;
    char *_serial_number;
    char *_owner;
    char *_license;
    char *_website;
    char *_contact;
};

#endif
