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
extern const TableDefinition tbl_autoexec_def;

#if defined(DECLARE_TABLE_IMPLEMENTATION_autoexec) || defined(DECLARE_TABLE_DEF_autoexec) || defined(DECLARE_TABLE_FOREIGN_STUB_autoexec) || defined(DECLARE_TABLE_FOREIGN_STUB_autoexec)

const TableDefinition tbl_autoexec_def = { "autoexec",
  { /* table aliases */    },
  {
          std::make_tuple("path", TEXT_TYPE,     ColumnOptions::INDEX        ),
          std::make_tuple("name", TEXT_TYPE,     ColumnOptions::DEFAULT        ),
          std::make_tuple("source", TEXT_TYPE,     ColumnOptions::DEFAULT        ),
      },
  { /* column aliases */   },

  TableAttributes::NONE
};


#endif // defined(DECLARE_TABLE_IMPLEMENTATION) || defined(DECLARE_TABLE_DEF)

} // namespace tables

#if defined(DECLARE_TABLE_IMPLEMENTATION_autoexec) || defined(DECLARE_TABLE_FOREIGN_STUB_autoexec) || defined(DECLARE_TABLE_FOREIGN_STUB_autoexec)

TablePluginBase* tbl_autoexec_stub_new()
{
  return new TablePluginBase(tables::tbl_autoexec_def);
}

#endif // defined(DECLARE_TABLE_IMPLEMENTATION) || defined(DECLARE_TABLE_FOREIGN_STUB)

#if defined(DECLARE_TABLE_STRUCT_autoexec) || defined(DECLARE_TABLE_IMPLEMENTATION_autoexec)
struct tbl_autoexec_data_t {

      std::string      path;
      std::string      name;
      std::string      source;

  /*
   * Convert to osquery Row format
   */
  void toHashmap(Row &dest) const {
        dest["path"] = __sqliteField(path);
        dest["name"] = __sqliteField(name);
        dest["source"] = __sqliteField(source);
      }

};

#endif // DECLARE_TABLE_STRUCT_

#if defined(DECLARE_TABLE_IMPLEMENTATION_autoexec)

// forward declaration of funcs
namespace tables {
osquery::QueryData genAutoexec(QueryContext& context);
}

class autoexecTablePlugin : public TablePluginBase {
public:
 autoexecTablePlugin(const TableDefinition& tdef) : TablePluginBase(tdef) { }

 private:
  QueryData generate(QueryContext& context) override {
    auto results = tables::genAutoexec(context);
    return results;
  }

};

TablePluginBase* tbl_autoexec_plugin_new()
{
  return new autoexecTablePlugin(tables::tbl_autoexec_def);
}
#endif // defined(DECLARE_TABLE_IMPLEMENTATION)

extern TablePluginBase* tbl_autoexec_plugin_new();

} // namespace osquery