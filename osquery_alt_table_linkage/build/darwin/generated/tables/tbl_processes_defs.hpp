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
extern const TableDefinition tbl_processes_def;

#if defined(DECLARE_TABLE_IMPLEMENTATION_processes) || defined(DECLARE_TABLE_DEF_processes) || defined(DECLARE_TABLE_FOREIGN_STUB_processes) || defined(DECLARE_TABLE_FOREIGN_STUB_processes)

const TableDefinition tbl_processes_def = { "processes",
  { /* table aliases */    },
  {
          std::make_tuple("pid", BIGINT_TYPE,     ColumnOptions::INDEX        ),
          std::make_tuple("name", TEXT_TYPE,     ColumnOptions::DEFAULT        ),
          std::make_tuple("path", TEXT_TYPE,     ColumnOptions::DEFAULT        ),
          std::make_tuple("cmdline", TEXT_TYPE,     ColumnOptions::DEFAULT        ),
          std::make_tuple("state", TEXT_TYPE,     ColumnOptions::DEFAULT        ),
          std::make_tuple("cwd", TEXT_TYPE,     ColumnOptions::DEFAULT        ),
          std::make_tuple("root", TEXT_TYPE,     ColumnOptions::DEFAULT        ),
          std::make_tuple("uid", BIGINT_TYPE,     ColumnOptions::DEFAULT        ),
          std::make_tuple("gid", BIGINT_TYPE,     ColumnOptions::DEFAULT        ),
          std::make_tuple("euid", BIGINT_TYPE,     ColumnOptions::DEFAULT        ),
          std::make_tuple("egid", BIGINT_TYPE,     ColumnOptions::DEFAULT        ),
          std::make_tuple("suid", BIGINT_TYPE,     ColumnOptions::DEFAULT        ),
          std::make_tuple("sgid", BIGINT_TYPE,     ColumnOptions::DEFAULT        ),
          std::make_tuple("on_disk", INTEGER_TYPE,     ColumnOptions::DEFAULT        ),
          std::make_tuple("wired_size", BIGINT_TYPE,     ColumnOptions::DEFAULT        ),
          std::make_tuple("resident_size", BIGINT_TYPE,     ColumnOptions::DEFAULT        ),
          std::make_tuple("total_size", BIGINT_TYPE,     ColumnOptions::DEFAULT        ),
          std::make_tuple("user_time", BIGINT_TYPE,     ColumnOptions::DEFAULT        ),
          std::make_tuple("system_time", BIGINT_TYPE,     ColumnOptions::DEFAULT        ),
          std::make_tuple("start_time", BIGINT_TYPE,     ColumnOptions::DEFAULT        ),
          std::make_tuple("parent", BIGINT_TYPE,     ColumnOptions::DEFAULT        ),
          std::make_tuple("pgroup", BIGINT_TYPE,     ColumnOptions::DEFAULT        ),
          std::make_tuple("threads", INTEGER_TYPE,     ColumnOptions::DEFAULT        ),
          std::make_tuple("nice", INTEGER_TYPE,     ColumnOptions::DEFAULT        ),
      },
  { /* column aliases */ {"total_size", {"phys_footprint"}},  },
  TableAttributes::CACHEABLE |
  TableAttributes::NONE
};


#endif // defined(DECLARE_TABLE_IMPLEMENTATION) || defined(DECLARE_TABLE_DEF)

} // namespace tables

#if defined(DECLARE_TABLE_IMPLEMENTATION_processes) || defined(DECLARE_TABLE_FOREIGN_STUB_processes) || defined(DECLARE_TABLE_FOREIGN_STUB_processes)

TablePluginBase* tbl_processes_stub_new()
{
  return new TablePluginBase(tables::tbl_processes_def);
}

#endif // defined(DECLARE_TABLE_IMPLEMENTATION) || defined(DECLARE_TABLE_FOREIGN_STUB)

#if defined(DECLARE_TABLE_STRUCT_processes) || defined(DECLARE_TABLE_IMPLEMENTATION_processes)
struct tbl_processes_data_t {

      long long int      pid;
      std::string      name;
      std::string      path;
      std::string      cmdline;
      std::string      state;
      std::string      cwd;
      std::string      root;
      long long int      uid;
      long long int      gid;
      long long int      euid;
      long long int      egid;
      long long int      suid;
      long long int      sgid;
      int      on_disk;
      long long int      wired_size;
      long long int      resident_size;
      long long int      total_size;
      long long int      user_time;
      long long int      system_time;
      long long int      start_time;
      long long int      parent;
      long long int      pgroup;
      int      threads;
      int      nice;

  /*
   * Convert to osquery Row format
   */
  void toHashmap(Row &dest) const {
        dest["pid"] = __sqliteField(pid);
        dest["name"] = __sqliteField(name);
        dest["path"] = __sqliteField(path);
        dest["cmdline"] = __sqliteField(cmdline);
        dest["state"] = __sqliteField(state);
        dest["cwd"] = __sqliteField(cwd);
        dest["root"] = __sqliteField(root);
        dest["uid"] = __sqliteField(uid);
        dest["gid"] = __sqliteField(gid);
        dest["euid"] = __sqliteField(euid);
        dest["egid"] = __sqliteField(egid);
        dest["suid"] = __sqliteField(suid);
        dest["sgid"] = __sqliteField(sgid);
        dest["on_disk"] = __sqliteField(on_disk);
        dest["wired_size"] = __sqliteField(wired_size);
        dest["resident_size"] = __sqliteField(resident_size);
        dest["total_size"] = __sqliteField(total_size);
        dest["user_time"] = __sqliteField(user_time);
        dest["system_time"] = __sqliteField(system_time);
        dest["start_time"] = __sqliteField(start_time);
        dest["parent"] = __sqliteField(parent);
        dest["pgroup"] = __sqliteField(pgroup);
        dest["threads"] = __sqliteField(threads);
        dest["nice"] = __sqliteField(nice);
      }

};

#endif // DECLARE_TABLE_STRUCT_

#if defined(DECLARE_TABLE_IMPLEMENTATION_processes)

// forward declaration of funcs
namespace tables {
osquery::QueryData genProcesses(QueryContext& context);
}

class processesTablePlugin : public TablePluginBase {
public:
 processesTablePlugin(const TableDefinition& tdef) : TablePluginBase(tdef) { }

 private:
  QueryData generate(QueryContext& context) override {
    auto results = tables::genProcesses(context);
    return results;
  }

};

TablePluginBase* tbl_processes_plugin_new()
{
  return new processesTablePlugin(tables::tbl_processes_def);
}
#endif // defined(DECLARE_TABLE_IMPLEMENTATION)

extern TablePluginBase* tbl_processes_plugin_new();

} // namespace osquery