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

#include <osquery/logger.h>
#include <osquery/tables.h>

namespace osquery {

namespace tables {
extern const TableDefinition tbl_etc_hosts_def;

#if defined(DECLARE_TABLE_IMPLEMENTATION_etc_hosts) || defined(DECLARE_TABLE_DEF_etc_hosts) || defined(DECLARE_TABLE_FOREIGN_STUB_etc_hosts) || defined(DECLARE_TABLE_FOREIGN_STUB_etc_hosts)

const TableDefinition tbl_etc_hosts_def = { "etc_hosts",
  { /* table aliases */  "hosts",  },
  {
          std::make_tuple("address", TEXT_TYPE,     ColumnOptions::DEFAULT        ),
          std::make_tuple("hostnames", TEXT_TYPE,     ColumnOptions::DEFAULT        ),
      },
  { /* column aliases */   },
  TableAttributes::CACHEABLE |
  TableAttributes::NONE
};


#endif // defined(DECLARE_TABLE_IMPLEMENTATION) || defined(DECLARE_TABLE_DEF)

} // namespace tables

#if defined(DECLARE_TABLE_IMPLEMENTATION_etc_hosts) || defined(DECLARE_TABLE_FOREIGN_STUB_etc_hosts) || defined(DECLARE_TABLE_FOREIGN_STUB_etc_hosts)

TablePluginBase* tbl_etc_hosts_stub_new()
{
  return new TablePluginBase(tables::tbl_etc_hosts_def);
}

#endif // defined(DECLARE_TABLE_IMPLEMENTATION) || defined(DECLARE_TABLE_FOREIGN_STUB)

#if defined(DECLARE_TABLE_STRUCT_etc_hosts) || defined(DECLARE_TABLE_IMPLEMENTATION_etc_hosts)
struct tbl_etc_hosts_data_t {

      std::string      address;
      std::string      hostnames;

  /*
   * Convert to osquery Row format
   */
  void toHashmap(Row &dest) const {
        dest["address"] = __sqliteField(address);
        dest["hostnames"] = __sqliteField(hostnames);
      }

};

#endif // DECLARE_TABLE_STRUCT_

#if defined(DECLARE_TABLE_IMPLEMENTATION_etc_hosts)

// forward declaration of funcs
namespace tables {
osquery::QueryData genEtcHosts(QueryContext& context);
}

class etcHostsTablePlugin : public TablePluginBase {
public:
 etcHostsTablePlugin(const TableDefinition& tdef) : TablePluginBase(tdef) { }

 private:
  QueryData generate(QueryContext& context) override {
    auto results = tables::genEtcHosts(context);
    return results;
  }

};

TablePluginBase* tbl_etc_hosts_plugin_new()
{
  return new etcHostsTablePlugin(tables::tbl_etc_hosts_def);
}
#endif // defined(DECLARE_TABLE_IMPLEMENTATION)

extern TablePluginBase* tbl_etc_hosts_plugin_new();

} // namespace osquery