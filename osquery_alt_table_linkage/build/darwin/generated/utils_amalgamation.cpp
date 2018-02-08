/**
 *  Copyright (c) 2014-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under both the Apache 2.0 license (found in the
 *  LICENSE file in the root directory of this source tree) and the GPLv2 (found
 *  in the COPYING file in the root directory of this source tree).
 *  You may select, at your option, one of the above-listed licenses.
 */

/*
** This file is generated. Do not modify it manually!
*/

#include <osquery/events.h>
#include <osquery/logger.h>
#include <osquery/registry.h>
#include <osquery/tables.h>



namespace osquery {




  extern TablePluginBase* tbl_file_plugin_new();
  REGISTER_OBJ(tbl_file_plugin_new(),TablePluginBase,"table", file, true);



  extern TablePluginBase* tbl_osquery_events_plugin_new();
  REGISTER_OBJ(tbl_osquery_events_plugin_new(),TablePluginBase,"table", osquery_events, true);



  extern TablePluginBase* tbl_osquery_extensions_plugin_new();
  REGISTER_OBJ(tbl_osquery_extensions_plugin_new(),TablePluginBase,"table", osquery_extensions, true);



  extern TablePluginBase* tbl_osquery_flags_plugin_new();
  REGISTER_OBJ(tbl_osquery_flags_plugin_new(),TablePluginBase,"table", osquery_flags, true);



  extern TablePluginBase* tbl_osquery_info_plugin_new();
  REGISTER_OBJ(tbl_osquery_info_plugin_new(),TablePluginBase,"table", osquery_info, true);



  extern TablePluginBase* tbl_osquery_packs_plugin_new();
  REGISTER_OBJ(tbl_osquery_packs_plugin_new(),TablePluginBase,"table", osquery_packs, true);



  extern TablePluginBase* tbl_osquery_registry_plugin_new();
  REGISTER_OBJ(tbl_osquery_registry_plugin_new(),TablePluginBase,"table", osquery_registry, true);



  extern TablePluginBase* tbl_osquery_schedule_plugin_new();
  REGISTER_OBJ(tbl_osquery_schedule_plugin_new(),TablePluginBase,"table", osquery_schedule, true);



  extern TablePluginBase* tbl_time_plugin_new();
  REGISTER_OBJ(tbl_time_plugin_new(),TablePluginBase,"table", time, true);




} // namespace