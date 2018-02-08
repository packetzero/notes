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



#define DECLARE_TABLE_FOREIGN_STUB_fbsd_kmods
#include <generated/tables/tbl_fbsd_kmods_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_pkg_packages
#include <generated/tables/tbl_pkg_packages_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_deb_packages
#include <generated/tables/tbl_deb_packages_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_ec2_instance_metadata
#include <generated/tables/tbl_ec2_instance_metadata_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_ec2_instance_tags
#include <generated/tables/tbl_ec2_instance_tags_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_iptables
#include <generated/tables/tbl_iptables_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_kernel_integrity
#include <generated/tables/tbl_kernel_integrity_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_kernel_modules
#include <generated/tables/tbl_kernel_modules_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_md_devices
#include <generated/tables/tbl_md_devices_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_md_drives
#include <generated/tables/tbl_md_drives_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_md_personalities
#include <generated/tables/tbl_md_personalities_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_memory_info
#include <generated/tables/tbl_memory_info_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_memory_map
#include <generated/tables/tbl_memory_map_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_msr
#include <generated/tables/tbl_msr_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_portage_keywords
#include <generated/tables/tbl_portage_keywords_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_portage_packages
#include <generated/tables/tbl_portage_packages_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_portage_use
#include <generated/tables/tbl_portage_use_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_process_file_events
#include <generated/tables/tbl_process_file_events_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_rpm_package_files
#include <generated/tables/tbl_rpm_package_files_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_rpm_packages
#include <generated/tables/tbl_rpm_packages_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_shadow
#include <generated/tables/tbl_shadow_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_shared_memory
#include <generated/tables/tbl_shared_memory_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_socket_events
#include <generated/tables/tbl_socket_events_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_syslog_events
#include <generated/tables/tbl_syslog_events_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_intel_me_info
#include <generated/tables/tbl_intel_me_info_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_appcompat_shims
#include <generated/tables/tbl_appcompat_shims_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_authenticode
#include <generated/tables/tbl_authenticode_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_autoexec
#include <generated/tables/tbl_autoexec_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_chocolatey_packages
#include <generated/tables/tbl_chocolatey_packages_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_drivers
#include <generated/tables/tbl_drivers_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_ie_extensions
#include <generated/tables/tbl_ie_extensions_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_kva_speculative_info
#include <generated/tables/tbl_kva_speculative_info_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_logical_drives
#include <generated/tables/tbl_logical_drives_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_patches
#include <generated/tables/tbl_patches_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_physical_disk_performance
#include <generated/tables/tbl_physical_disk_performance_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_pipes
#include <generated/tables/tbl_pipes_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_programs
#include <generated/tables/tbl_programs_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_registry
#include <generated/tables/tbl_registry_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_scheduled_tasks
#include <generated/tables/tbl_scheduled_tasks_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_services
#include <generated/tables/tbl_services_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_shared_resources
#include <generated/tables/tbl_shared_resources_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_windows_crashes
#include <generated/tables/tbl_windows_crashes_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_windows_events
#include <generated/tables/tbl_windows_events_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_wmi_cli_event_consumers
#include <generated/tables/tbl_wmi_cli_event_consumers_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_wmi_event_filters
#include <generated/tables/tbl_wmi_event_filters_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_wmi_filter_consumer_binding
#include <generated/tables/tbl_wmi_filter_consumer_binding_defs.hpp>

#define DECLARE_TABLE_FOREIGN_STUB_wmi_script_event_consumers
#include <generated/tables/tbl_wmi_script_event_consumers_defs.hpp>



namespace osquery {


  void registerForeignTables() {
  auto registry = RegistryFactory::get().registry("table");
  
  extern TablePluginBase* tbl_fbsd_kmods_stub_new();
  {
    auto ptr = tbl_fbsd_kmods_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_pkg_packages_stub_new();
  {
    auto ptr = tbl_pkg_packages_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_deb_packages_stub_new();
  {
    auto ptr = tbl_deb_packages_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_ec2_instance_metadata_stub_new();
  {
    auto ptr = tbl_ec2_instance_metadata_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_ec2_instance_tags_stub_new();
  {
    auto ptr = tbl_ec2_instance_tags_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_iptables_stub_new();
  {
    auto ptr = tbl_iptables_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_kernel_integrity_stub_new();
  {
    auto ptr = tbl_kernel_integrity_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_kernel_modules_stub_new();
  {
    auto ptr = tbl_kernel_modules_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_md_devices_stub_new();
  {
    auto ptr = tbl_md_devices_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_md_drives_stub_new();
  {
    auto ptr = tbl_md_drives_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_md_personalities_stub_new();
  {
    auto ptr = tbl_md_personalities_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_memory_info_stub_new();
  {
    auto ptr = tbl_memory_info_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_memory_map_stub_new();
  {
    auto ptr = tbl_memory_map_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_msr_stub_new();
  {
    auto ptr = tbl_msr_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_portage_keywords_stub_new();
  {
    auto ptr = tbl_portage_keywords_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_portage_packages_stub_new();
  {
    auto ptr = tbl_portage_packages_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_portage_use_stub_new();
  {
    auto ptr = tbl_portage_use_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_process_file_events_stub_new();
  {
    auto ptr = tbl_process_file_events_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_rpm_package_files_stub_new();
  {
    auto ptr = tbl_rpm_package_files_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_rpm_packages_stub_new();
  {
    auto ptr = tbl_rpm_packages_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_shadow_stub_new();
  {
    auto ptr = tbl_shadow_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_shared_memory_stub_new();
  {
    auto ptr = tbl_shared_memory_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_socket_events_stub_new();
  {
    auto ptr = tbl_socket_events_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_syslog_events_stub_new();
  {
    auto ptr = tbl_syslog_events_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_intel_me_info_stub_new();
  {
    auto ptr = tbl_intel_me_info_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_appcompat_shims_stub_new();
  {
    auto ptr = tbl_appcompat_shims_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_authenticode_stub_new();
  {
    auto ptr = tbl_authenticode_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_autoexec_stub_new();
  {
    auto ptr = tbl_autoexec_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_chocolatey_packages_stub_new();
  {
    auto ptr = tbl_chocolatey_packages_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_drivers_stub_new();
  {
    auto ptr = tbl_drivers_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_ie_extensions_stub_new();
  {
    auto ptr = tbl_ie_extensions_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_kva_speculative_info_stub_new();
  {
    auto ptr = tbl_kva_speculative_info_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_logical_drives_stub_new();
  {
    auto ptr = tbl_logical_drives_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_patches_stub_new();
  {
    auto ptr = tbl_patches_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_physical_disk_performance_stub_new();
  {
    auto ptr = tbl_physical_disk_performance_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_pipes_stub_new();
  {
    auto ptr = tbl_pipes_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_programs_stub_new();
  {
    auto ptr = tbl_programs_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_registry_stub_new();
  {
    auto ptr = tbl_registry_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_scheduled_tasks_stub_new();
  {
    auto ptr = tbl_scheduled_tasks_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_services_stub_new();
  {
    auto ptr = tbl_services_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_shared_resources_stub_new();
  {
    auto ptr = tbl_shared_resources_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_windows_crashes_stub_new();
  {
    auto ptr = tbl_windows_crashes_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_windows_events_stub_new();
  {
    auto ptr = tbl_windows_events_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_wmi_cli_event_consumers_stub_new();
  {
    auto ptr = tbl_wmi_cli_event_consumers_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_wmi_event_filters_stub_new();
  {
    auto ptr = tbl_wmi_event_filters_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_wmi_filter_consumer_binding_stub_new();
  {
    auto ptr = tbl_wmi_filter_consumer_binding_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  extern TablePluginBase* tbl_wmi_script_event_consumers_stub_new();
  {
    auto ptr = tbl_wmi_script_event_consumers_stub_new();
    registry->add(ptr->definition().name, std::shared_ptr<TablePluginBase>(ptr), false);
  }
  
  }


} // namespace