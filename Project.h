/* Project.h - Basic Project Information Library
 *
 * Copyright 2014-2020 Marcio Pessoa
 *
 * Author: Márcio Pessoa <marcio.pessoa@gmail.com>
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

class Project {
 public:
  Project(const char *platform, const char *mark, const char *name,
          const char *version, const char *version_date,
          const char *serial_number,
          const char *owner,
          const char *license,
          const char *website,
          const char *contact);
  String version();
  String owner();
  String license();
  String website();
  String contact();
  String compiled();
  void reset();

 private:
  String _platform;
  String _mark;
  String _name;
  String _version;
  String _version_date;
  String _serial_number;
  String _owner;
  String _license;
  String _website;
  String _contact;
};

#endif
