/* Project.cpp - Basic Project Information Library
 * 
 */

#include "Arduino.h"
#include "Project.h"

/* Project
 * 
 * Description
 *   Sciemon basic and common definitions.
 * 
 *   Sciemon (char *platform, char *mark, char *name,
 *            char *version, char *version_date,
 *            char *serial_number,
 *            char *owner,
 *            char *license,
 *            char *website,
 *            char *contact)
 * 
 * Parameters
 *   platform: 
 *   mark:
 *   name: 
 *   version: 
 *   version_date:
 *   serial_number: 
 *   owner:
 *   license:
 *   website:
 *   contact: 
 * 
 * Returns
 *   void
 */
Project::Project(char *platform, char *mark, char *name,
                 char *version, char *version_date,
                 char *serial_number,
                 char *owner,
                 char *license,
                 char *website,
                 char *contact) {
  _platform = platform;
  _mark = mark;
  _name = name;
  _version = version;
  _version_date = version_date;
  _serial_number = serial_number;
  _owner = owner;
  _license = license;
  _website = website;
  _contact = contact;
}

/* reset
 * 
 * Description
 *   Restarts program from beginning but does not reset the peripherals
 *   and registers.
 * 
 *   project.reset()
 * 
 * Parameters
 *   none
 * 
 * Returns
 *   void
 */
void Project::reset(void) {
  delay(100);
  asm volatile ("  jmp 0");
}

/* owner
 * 
 * Description
 *   Information about owner.
 * 
 *   project.owner()
 * 
 * Parameters
 *   none
 * 
 * Returns
 *   String: Information about owner
 */
String Project::owner() {
  return String(_owner);
}

/* license
 * 
 * Description
 *   Information about license.
 * 
 *   project.license()
 * 
 * Parameters
 *   none
 * 
 * Returns
 *   String: Information about license
 */
String Project::license() {
  return ("License: " + String(_license));
}

/* website
 * 
 * Description
 *   Information about website.
 * 
 *   project.website()
 * 
 * Parameters
 *   none
 * 
 * Returns
 *   String: Information about website
 */
String Project::website() {
  return ("Website: " + String(_website));
}

/* contact
 * 
 * Description
 *   Information about contact.
 * 
 *   project.contact()
 * 
 * Parameters
 *   none
 * 
 * Returns
 *   String: Information about contact
 */
String Project::contact() {
  return ("Contact: " + String(_contact));
}

/* version
 * 
 * Description
 *   System version.
 * 
 *   project.version()
 * 
 * Parameters
 *   none
 * 
 * Returns
 *   String: Information about system version
 */
String Project::version() {
  return (String(_platform) + " Mark " + String(_mark) + " - " + String(_name) + ", " + String(_version) + " (" + String(_version_date) + ")");
}

/* compiled
 * 
 * Description
 *   Compilation date.
 * 
 *   project.version()
 * 
 * Parameters
 *   none
 * 
 * Returns
 *   String: Information about system version
 */
String Project::compiled() {
  return ("Compiled: " + String(__DATE__) + " " + String(__TIME__));
}
