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




  extern TablePluginBase* tbl_arp_cache_plugin_new();
  REGISTER_OBJ(tbl_arp_cache_plugin_new(),TablePluginBase,"table", arp_cache, false);



  extern TablePluginBase* tbl_carbon_black_info_plugin_new();
  REGISTER_OBJ(tbl_carbon_black_info_plugin_new(),TablePluginBase,"table", carbon_black_info, false);



  extern TablePluginBase* tbl_carves_plugin_new();
  REGISTER_OBJ(tbl_carves_plugin_new(),TablePluginBase,"table", carves, false);



  extern TablePluginBase* tbl_chrome_extensions_plugin_new();
  REGISTER_OBJ(tbl_chrome_extensions_plugin_new(),TablePluginBase,"table", chrome_extensions, false);



  extern TablePluginBase* tbl_cpuid_plugin_new();
  REGISTER_OBJ(tbl_cpuid_plugin_new(),TablePluginBase,"table", cpuid, false);



  extern TablePluginBase* tbl_curl_plugin_new();
  REGISTER_OBJ(tbl_curl_plugin_new(),TablePluginBase,"table", curl, false);



  extern TablePluginBase* tbl_curl_certificate_plugin_new();
  REGISTER_OBJ(tbl_curl_certificate_plugin_new(),TablePluginBase,"table", curl_certificate, false);



  extern TablePluginBase* tbl_etc_hosts_plugin_new();
  REGISTER_OBJ(tbl_etc_hosts_plugin_new(),TablePluginBase,"table", etc_hosts, false);



  extern TablePluginBase* tbl_etc_protocols_plugin_new();
  REGISTER_OBJ(tbl_etc_protocols_plugin_new(),TablePluginBase,"table", etc_protocols, false);



  extern TablePluginBase* tbl_etc_services_plugin_new();
  REGISTER_OBJ(tbl_etc_services_plugin_new(),TablePluginBase,"table", etc_services, false);



    // table example is blacklisted



  extern TablePluginBase* tbl_groups_plugin_new();
  REGISTER_OBJ(tbl_groups_plugin_new(),TablePluginBase,"table", groups, false);



  extern TablePluginBase* tbl_hash_plugin_new();
  REGISTER_OBJ(tbl_hash_plugin_new(),TablePluginBase,"table", hash, false);



  extern TablePluginBase* tbl_interface_addresses_plugin_new();
  REGISTER_OBJ(tbl_interface_addresses_plugin_new(),TablePluginBase,"table", interface_addresses, false);



  extern TablePluginBase* tbl_interface_details_plugin_new();
  REGISTER_OBJ(tbl_interface_details_plugin_new(),TablePluginBase,"table", interface_details, false);



  extern TablePluginBase* tbl_kernel_info_plugin_new();
  REGISTER_OBJ(tbl_kernel_info_plugin_new(),TablePluginBase,"table", kernel_info, false);



  extern TablePluginBase* tbl_listening_ports_plugin_new();
  REGISTER_OBJ(tbl_listening_ports_plugin_new(),TablePluginBase,"table", listening_ports, false);



  extern TablePluginBase* tbl_logged_in_users_plugin_new();
  REGISTER_OBJ(tbl_logged_in_users_plugin_new(),TablePluginBase,"table", logged_in_users, false);



  extern TablePluginBase* tbl_os_version_plugin_new();
  REGISTER_OBJ(tbl_os_version_plugin_new(),TablePluginBase,"table", os_version, false);



  extern TablePluginBase* tbl_platform_info_plugin_new();
  REGISTER_OBJ(tbl_platform_info_plugin_new(),TablePluginBase,"table", platform_info, false);



  extern TablePluginBase* tbl_process_memory_map_plugin_new();
  REGISTER_OBJ(tbl_process_memory_map_plugin_new(),TablePluginBase,"table", process_memory_map, false);



  extern TablePluginBase* tbl_process_open_sockets_plugin_new();
  REGISTER_OBJ(tbl_process_open_sockets_plugin_new(),TablePluginBase,"table", process_open_sockets, false);



  extern TablePluginBase* tbl_processes_plugin_new();
  REGISTER_OBJ(tbl_processes_plugin_new(),TablePluginBase,"table", processes, false);



  extern TablePluginBase* tbl_python_packages_plugin_new();
  REGISTER_OBJ(tbl_python_packages_plugin_new(),TablePluginBase,"table", python_packages, false);



  extern TablePluginBase* tbl_routes_plugin_new();
  REGISTER_OBJ(tbl_routes_plugin_new(),TablePluginBase,"table", routes, false);



  extern TablePluginBase* tbl_startup_items_plugin_new();
  REGISTER_OBJ(tbl_startup_items_plugin_new(),TablePluginBase,"table", startup_items, false);



  extern TablePluginBase* tbl_system_info_plugin_new();
  REGISTER_OBJ(tbl_system_info_plugin_new(),TablePluginBase,"table", system_info, false);



  extern TablePluginBase* tbl_uptime_plugin_new();
  REGISTER_OBJ(tbl_uptime_plugin_new(),TablePluginBase,"table", uptime, false);



  extern TablePluginBase* tbl_users_plugin_new();
  REGISTER_OBJ(tbl_users_plugin_new(),TablePluginBase,"table", users, false);



  extern TablePluginBase* tbl_ad_config_plugin_new();
  REGISTER_OBJ(tbl_ad_config_plugin_new(),TablePluginBase,"table", ad_config, false);



  extern TablePluginBase* tbl_alf_plugin_new();
  REGISTER_OBJ(tbl_alf_plugin_new(),TablePluginBase,"table", alf, false);



  extern TablePluginBase* tbl_alf_exceptions_plugin_new();
  REGISTER_OBJ(tbl_alf_exceptions_plugin_new(),TablePluginBase,"table", alf_exceptions, false);



  extern TablePluginBase* tbl_alf_explicit_auths_plugin_new();
  REGISTER_OBJ(tbl_alf_explicit_auths_plugin_new(),TablePluginBase,"table", alf_explicit_auths, false);



  extern TablePluginBase* tbl_alf_services_plugin_new();
  REGISTER_OBJ(tbl_alf_services_plugin_new(),TablePluginBase,"table", alf_services, false);



  extern TablePluginBase* tbl_app_schemes_plugin_new();
  REGISTER_OBJ(tbl_app_schemes_plugin_new(),TablePluginBase,"table", app_schemes, false);



  extern TablePluginBase* tbl_apps_plugin_new();
  REGISTER_OBJ(tbl_apps_plugin_new(),TablePluginBase,"table", apps, false);



  extern TablePluginBase* tbl_asl_plugin_new();
  REGISTER_OBJ(tbl_asl_plugin_new(),TablePluginBase,"table", asl, false);



  extern TablePluginBase* tbl_authorization_mechanisms_plugin_new();
  REGISTER_OBJ(tbl_authorization_mechanisms_plugin_new(),TablePluginBase,"table", authorization_mechanisms, false);



  extern TablePluginBase* tbl_authorizations_plugin_new();
  REGISTER_OBJ(tbl_authorizations_plugin_new(),TablePluginBase,"table", authorizations, false);



  extern TablePluginBase* tbl_browser_plugins_plugin_new();
  REGISTER_OBJ(tbl_browser_plugins_plugin_new(),TablePluginBase,"table", browser_plugins, false);



  extern TablePluginBase* tbl_crashes_plugin_new();
  REGISTER_OBJ(tbl_crashes_plugin_new(),TablePluginBase,"table", crashes, false);



  extern TablePluginBase* tbl_device_firmware_plugin_new();
  REGISTER_OBJ(tbl_device_firmware_plugin_new(),TablePluginBase,"table", device_firmware, false);



  extern TablePluginBase* tbl_disk_events_plugin_new();
  REGISTER_OBJ(tbl_disk_events_plugin_new(),TablePluginBase,"table", disk_events, false);



  extern TablePluginBase* tbl_event_taps_plugin_new();
  REGISTER_OBJ(tbl_event_taps_plugin_new(),TablePluginBase,"table", event_taps, false);



  extern TablePluginBase* tbl_extended_attributes_plugin_new();
  REGISTER_OBJ(tbl_extended_attributes_plugin_new(),TablePluginBase,"table", extended_attributes, false);



  extern TablePluginBase* tbl_fan_speed_sensors_plugin_new();
  REGISTER_OBJ(tbl_fan_speed_sensors_plugin_new(),TablePluginBase,"table", fan_speed_sensors, false);



  extern TablePluginBase* tbl_gatekeeper_plugin_new();
  REGISTER_OBJ(tbl_gatekeeper_plugin_new(),TablePluginBase,"table", gatekeeper, false);



  extern TablePluginBase* tbl_gatekeeper_approved_apps_plugin_new();
  REGISTER_OBJ(tbl_gatekeeper_approved_apps_plugin_new(),TablePluginBase,"table", gatekeeper_approved_apps, false);



  extern TablePluginBase* tbl_homebrew_packages_plugin_new();
  REGISTER_OBJ(tbl_homebrew_packages_plugin_new(),TablePluginBase,"table", homebrew_packages, false);



  extern TablePluginBase* tbl_iokit_devicetree_plugin_new();
  REGISTER_OBJ(tbl_iokit_devicetree_plugin_new(),TablePluginBase,"table", iokit_devicetree, false);



  extern TablePluginBase* tbl_iokit_registry_plugin_new();
  REGISTER_OBJ(tbl_iokit_registry_plugin_new(),TablePluginBase,"table", iokit_registry, false);



  extern TablePluginBase* tbl_kernel_extensions_plugin_new();
  REGISTER_OBJ(tbl_kernel_extensions_plugin_new(),TablePluginBase,"table", kernel_extensions, false);



  extern TablePluginBase* tbl_kernel_panics_plugin_new();
  REGISTER_OBJ(tbl_kernel_panics_plugin_new(),TablePluginBase,"table", kernel_panics, false);



  extern TablePluginBase* tbl_keychain_acls_plugin_new();
  REGISTER_OBJ(tbl_keychain_acls_plugin_new(),TablePluginBase,"table", keychain_acls, false);



  extern TablePluginBase* tbl_keychain_items_plugin_new();
  REGISTER_OBJ(tbl_keychain_items_plugin_new(),TablePluginBase,"table", keychain_items, false);



  extern TablePluginBase* tbl_launchd_plugin_new();
  REGISTER_OBJ(tbl_launchd_plugin_new(),TablePluginBase,"table", launchd, false);



  extern TablePluginBase* tbl_launchd_overrides_plugin_new();
  REGISTER_OBJ(tbl_launchd_overrides_plugin_new(),TablePluginBase,"table", launchd_overrides, false);



  extern TablePluginBase* tbl_managed_policies_plugin_new();
  REGISTER_OBJ(tbl_managed_policies_plugin_new(),TablePluginBase,"table", managed_policies, false);



  extern TablePluginBase* tbl_nfs_shares_plugin_new();
  REGISTER_OBJ(tbl_nfs_shares_plugin_new(),TablePluginBase,"table", nfs_shares, false);



  extern TablePluginBase* tbl_nvram_plugin_new();
  REGISTER_OBJ(tbl_nvram_plugin_new(),TablePluginBase,"table", nvram, false);



  extern TablePluginBase* tbl_package_bom_plugin_new();
  REGISTER_OBJ(tbl_package_bom_plugin_new(),TablePluginBase,"table", package_bom, false);



  extern TablePluginBase* tbl_package_install_history_plugin_new();
  REGISTER_OBJ(tbl_package_install_history_plugin_new(),TablePluginBase,"table", package_install_history, false);



  extern TablePluginBase* tbl_package_receipts_plugin_new();
  REGISTER_OBJ(tbl_package_receipts_plugin_new(),TablePluginBase,"table", package_receipts, false);



  extern TablePluginBase* tbl_plist_plugin_new();
  REGISTER_OBJ(tbl_plist_plugin_new(),TablePluginBase,"table", plist, false);



  extern TablePluginBase* tbl_power_sensors_plugin_new();
  REGISTER_OBJ(tbl_power_sensors_plugin_new(),TablePluginBase,"table", power_sensors, false);



  extern TablePluginBase* tbl_preferences_plugin_new();
  REGISTER_OBJ(tbl_preferences_plugin_new(),TablePluginBase,"table", preferences, false);



  extern TablePluginBase* tbl_quicklook_cache_plugin_new();
  REGISTER_OBJ(tbl_quicklook_cache_plugin_new(),TablePluginBase,"table", quicklook_cache, false);



  extern TablePluginBase* tbl_safari_extensions_plugin_new();
  REGISTER_OBJ(tbl_safari_extensions_plugin_new(),TablePluginBase,"table", safari_extensions, false);



  extern TablePluginBase* tbl_sandboxes_plugin_new();
  REGISTER_OBJ(tbl_sandboxes_plugin_new(),TablePluginBase,"table", sandboxes, false);



  extern TablePluginBase* tbl_shared_folders_plugin_new();
  REGISTER_OBJ(tbl_shared_folders_plugin_new(),TablePluginBase,"table", shared_folders, false);



  extern TablePluginBase* tbl_sharing_preferences_plugin_new();
  REGISTER_OBJ(tbl_sharing_preferences_plugin_new(),TablePluginBase,"table", sharing_preferences, false);



  extern TablePluginBase* tbl_signature_plugin_new();
  REGISTER_OBJ(tbl_signature_plugin_new(),TablePluginBase,"table", signature, false);



  extern TablePluginBase* tbl_sip_config_plugin_new();
  REGISTER_OBJ(tbl_sip_config_plugin_new(),TablePluginBase,"table", sip_config, false);



  extern TablePluginBase* tbl_smc_keys_plugin_new();
  REGISTER_OBJ(tbl_smc_keys_plugin_new(),TablePluginBase,"table", smc_keys, false);



  extern TablePluginBase* tbl_temperature_sensors_plugin_new();
  REGISTER_OBJ(tbl_temperature_sensors_plugin_new(),TablePluginBase,"table", temperature_sensors, false);



  extern TablePluginBase* tbl_time_machine_backups_plugin_new();
  REGISTER_OBJ(tbl_time_machine_backups_plugin_new(),TablePluginBase,"table", time_machine_backups, false);



  extern TablePluginBase* tbl_time_machine_destinations_plugin_new();
  REGISTER_OBJ(tbl_time_machine_destinations_plugin_new(),TablePluginBase,"table", time_machine_destinations, false);



  extern TablePluginBase* tbl_user_interaction_events_plugin_new();
  REGISTER_OBJ(tbl_user_interaction_events_plugin_new(),TablePluginBase,"table", user_interaction_events, false);



  extern TablePluginBase* tbl_virtual_memory_info_plugin_new();
  REGISTER_OBJ(tbl_virtual_memory_info_plugin_new(),TablePluginBase,"table", virtual_memory_info, false);



  extern TablePluginBase* tbl_wifi_networks_plugin_new();
  REGISTER_OBJ(tbl_wifi_networks_plugin_new(),TablePluginBase,"table", wifi_networks, false);



  extern TablePluginBase* tbl_wifi_scan_plugin_new();
  REGISTER_OBJ(tbl_wifi_scan_plugin_new(),TablePluginBase,"table", wifi_scan, false);



  extern TablePluginBase* tbl_wifi_status_plugin_new();
  REGISTER_OBJ(tbl_wifi_status_plugin_new(),TablePluginBase,"table", wifi_status, false);



  extern TablePluginBase* tbl_xprotect_entries_plugin_new();
  REGISTER_OBJ(tbl_xprotect_entries_plugin_new(),TablePluginBase,"table", xprotect_entries, false);



  extern TablePluginBase* tbl_xprotect_meta_plugin_new();
  REGISTER_OBJ(tbl_xprotect_meta_plugin_new(),TablePluginBase,"table", xprotect_meta, false);



  extern TablePluginBase* tbl_xprotect_reports_plugin_new();
  REGISTER_OBJ(tbl_xprotect_reports_plugin_new(),TablePluginBase,"table", xprotect_reports, false);



  extern TablePluginBase* tbl_lldp_neighbors_plugin_new();
  REGISTER_OBJ(tbl_lldp_neighbors_plugin_new(),TablePluginBase,"table", lldp_neighbors, false);



  extern TablePluginBase* tbl_certificates_plugin_new();
  REGISTER_OBJ(tbl_certificates_plugin_new(),TablePluginBase,"table", certificates, false);



  extern TablePluginBase* tbl_acpi_tables_plugin_new();
  REGISTER_OBJ(tbl_acpi_tables_plugin_new(),TablePluginBase,"table", acpi_tables, false);



  extern TablePluginBase* tbl_apt_sources_plugin_new();
  REGISTER_OBJ(tbl_apt_sources_plugin_new(),TablePluginBase,"table", apt_sources, false);



  extern TablePluginBase* tbl_augeas_plugin_new();
  REGISTER_OBJ(tbl_augeas_plugin_new(),TablePluginBase,"table", augeas, false);



  extern TablePluginBase* tbl_authorized_keys_plugin_new();
  REGISTER_OBJ(tbl_authorized_keys_plugin_new(),TablePluginBase,"table", authorized_keys, false);



  extern TablePluginBase* tbl_block_devices_plugin_new();
  REGISTER_OBJ(tbl_block_devices_plugin_new(),TablePluginBase,"table", block_devices, false);



  extern TablePluginBase* tbl_cpu_time_plugin_new();
  REGISTER_OBJ(tbl_cpu_time_plugin_new(),TablePluginBase,"table", cpu_time, false);



  extern TablePluginBase* tbl_crontab_plugin_new();
  REGISTER_OBJ(tbl_crontab_plugin_new(),TablePluginBase,"table", crontab, false);



  extern TablePluginBase* tbl_disk_encryption_plugin_new();
  REGISTER_OBJ(tbl_disk_encryption_plugin_new(),TablePluginBase,"table", disk_encryption, false);



  extern TablePluginBase* tbl_dns_resolvers_plugin_new();
  REGISTER_OBJ(tbl_dns_resolvers_plugin_new(),TablePluginBase,"table", dns_resolvers, false);



  extern TablePluginBase* tbl_docker_container_labels_plugin_new();
  REGISTER_OBJ(tbl_docker_container_labels_plugin_new(),TablePluginBase,"table", docker_container_labels, false);



  extern TablePluginBase* tbl_docker_container_mounts_plugin_new();
  REGISTER_OBJ(tbl_docker_container_mounts_plugin_new(),TablePluginBase,"table", docker_container_mounts, false);



  extern TablePluginBase* tbl_docker_container_networks_plugin_new();
  REGISTER_OBJ(tbl_docker_container_networks_plugin_new(),TablePluginBase,"table", docker_container_networks, false);



  extern TablePluginBase* tbl_docker_container_ports_plugin_new();
  REGISTER_OBJ(tbl_docker_container_ports_plugin_new(),TablePluginBase,"table", docker_container_ports, false);



  extern TablePluginBase* tbl_docker_container_processes_plugin_new();
  REGISTER_OBJ(tbl_docker_container_processes_plugin_new(),TablePluginBase,"table", docker_container_processes, false);



  extern TablePluginBase* tbl_docker_container_stats_plugin_new();
  REGISTER_OBJ(tbl_docker_container_stats_plugin_new(),TablePluginBase,"table", docker_container_stats, false);



  extern TablePluginBase* tbl_docker_containers_plugin_new();
  REGISTER_OBJ(tbl_docker_containers_plugin_new(),TablePluginBase,"table", docker_containers, false);



  extern TablePluginBase* tbl_docker_image_labels_plugin_new();
  REGISTER_OBJ(tbl_docker_image_labels_plugin_new(),TablePluginBase,"table", docker_image_labels, false);



  extern TablePluginBase* tbl_docker_images_plugin_new();
  REGISTER_OBJ(tbl_docker_images_plugin_new(),TablePluginBase,"table", docker_images, false);



  extern TablePluginBase* tbl_docker_info_plugin_new();
  REGISTER_OBJ(tbl_docker_info_plugin_new(),TablePluginBase,"table", docker_info, false);



  extern TablePluginBase* tbl_docker_network_labels_plugin_new();
  REGISTER_OBJ(tbl_docker_network_labels_plugin_new(),TablePluginBase,"table", docker_network_labels, false);



  extern TablePluginBase* tbl_docker_networks_plugin_new();
  REGISTER_OBJ(tbl_docker_networks_plugin_new(),TablePluginBase,"table", docker_networks, false);



  extern TablePluginBase* tbl_docker_version_plugin_new();
  REGISTER_OBJ(tbl_docker_version_plugin_new(),TablePluginBase,"table", docker_version, false);



  extern TablePluginBase* tbl_docker_volume_labels_plugin_new();
  REGISTER_OBJ(tbl_docker_volume_labels_plugin_new(),TablePluginBase,"table", docker_volume_labels, false);



  extern TablePluginBase* tbl_docker_volumes_plugin_new();
  REGISTER_OBJ(tbl_docker_volumes_plugin_new(),TablePluginBase,"table", docker_volumes, false);



  extern TablePluginBase* tbl_file_events_plugin_new();
  REGISTER_OBJ(tbl_file_events_plugin_new(),TablePluginBase,"table", file_events, false);



  extern TablePluginBase* tbl_firefox_addons_plugin_new();
  REGISTER_OBJ(tbl_firefox_addons_plugin_new(),TablePluginBase,"table", firefox_addons, false);



  extern TablePluginBase* tbl_hardware_events_plugin_new();
  REGISTER_OBJ(tbl_hardware_events_plugin_new(),TablePluginBase,"table", hardware_events, false);



  extern TablePluginBase* tbl_known_hosts_plugin_new();
  REGISTER_OBJ(tbl_known_hosts_plugin_new(),TablePluginBase,"table", known_hosts, false);



  extern TablePluginBase* tbl_last_plugin_new();
  REGISTER_OBJ(tbl_last_plugin_new(),TablePluginBase,"table", last, false);



  extern TablePluginBase* tbl_load_average_plugin_new();
  REGISTER_OBJ(tbl_load_average_plugin_new(),TablePluginBase,"table", load_average, false);



  extern TablePluginBase* tbl_magic_plugin_new();
  REGISTER_OBJ(tbl_magic_plugin_new(),TablePluginBase,"table", magic, false);



  extern TablePluginBase* tbl_mounts_plugin_new();
  REGISTER_OBJ(tbl_mounts_plugin_new(),TablePluginBase,"table", mounts, false);



  extern TablePluginBase* tbl_opera_extensions_plugin_new();
  REGISTER_OBJ(tbl_opera_extensions_plugin_new(),TablePluginBase,"table", opera_extensions, false);



  extern TablePluginBase* tbl_pci_devices_plugin_new();
  REGISTER_OBJ(tbl_pci_devices_plugin_new(),TablePluginBase,"table", pci_devices, false);



  extern TablePluginBase* tbl_process_envs_plugin_new();
  REGISTER_OBJ(tbl_process_envs_plugin_new(),TablePluginBase,"table", process_envs, false);



  extern TablePluginBase* tbl_process_events_plugin_new();
  REGISTER_OBJ(tbl_process_events_plugin_new(),TablePluginBase,"table", process_events, false);



  extern TablePluginBase* tbl_process_open_files_plugin_new();
  REGISTER_OBJ(tbl_process_open_files_plugin_new(),TablePluginBase,"table", process_open_files, false);



  extern TablePluginBase* tbl_prometheus_metrics_plugin_new();
  REGISTER_OBJ(tbl_prometheus_metrics_plugin_new(),TablePluginBase,"table", prometheus_metrics, false);



  extern TablePluginBase* tbl_shell_history_plugin_new();
  REGISTER_OBJ(tbl_shell_history_plugin_new(),TablePluginBase,"table", shell_history, false);



  extern TablePluginBase* tbl_smbios_tables_plugin_new();
  REGISTER_OBJ(tbl_smbios_tables_plugin_new(),TablePluginBase,"table", smbios_tables, false);



  extern TablePluginBase* tbl_sudoers_plugin_new();
  REGISTER_OBJ(tbl_sudoers_plugin_new(),TablePluginBase,"table", sudoers, false);



  extern TablePluginBase* tbl_suid_bin_plugin_new();
  REGISTER_OBJ(tbl_suid_bin_plugin_new(),TablePluginBase,"table", suid_bin, false);



  extern TablePluginBase* tbl_system_controls_plugin_new();
  REGISTER_OBJ(tbl_system_controls_plugin_new(),TablePluginBase,"table", system_controls, false);



  extern TablePluginBase* tbl_usb_devices_plugin_new();
  REGISTER_OBJ(tbl_usb_devices_plugin_new(),TablePluginBase,"table", usb_devices, false);



  extern TablePluginBase* tbl_user_events_plugin_new();
  REGISTER_OBJ(tbl_user_events_plugin_new(),TablePluginBase,"table", user_events, false);



  extern TablePluginBase* tbl_user_groups_plugin_new();
  REGISTER_OBJ(tbl_user_groups_plugin_new(),TablePluginBase,"table", user_groups, false);



  extern TablePluginBase* tbl_user_ssh_keys_plugin_new();
  REGISTER_OBJ(tbl_user_ssh_keys_plugin_new(),TablePluginBase,"table", user_ssh_keys, false);



  extern TablePluginBase* tbl_device_file_plugin_new();
  REGISTER_OBJ(tbl_device_file_plugin_new(),TablePluginBase,"table", device_file, false);



  extern TablePluginBase* tbl_device_hash_plugin_new();
  REGISTER_OBJ(tbl_device_hash_plugin_new(),TablePluginBase,"table", device_hash, false);



  extern TablePluginBase* tbl_device_partitions_plugin_new();
  REGISTER_OBJ(tbl_device_partitions_plugin_new(),TablePluginBase,"table", device_partitions, false);



  extern TablePluginBase* tbl_yara_plugin_new();
  REGISTER_OBJ(tbl_yara_plugin_new(),TablePluginBase,"table", yara, false);



  extern TablePluginBase* tbl_yara_events_plugin_new();
  REGISTER_OBJ(tbl_yara_events_plugin_new(),TablePluginBase,"table", yara_events, false);




} // namespace