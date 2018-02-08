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
extern const TableDefinition tbl_disk_events_def;

#if defined(DECLARE_TABLE_IMPLEMENTATION_disk_events) || defined(DECLARE_TABLE_DEF_disk_events) || defined(DECLARE_TABLE_FOREIGN_STUB_disk_events) || defined(DECLARE_TABLE_FOREIGN_STUB_disk_events)

const TableDefinition tbl_disk_events_def = { "disk_events",
  { /* table aliases */    },
  {
          std::make_tuple("action", TEXT_TYPE,     ColumnOptions::DEFAULT        ),
          std::make_tuple("path", TEXT_TYPE,     ColumnOptions::DEFAULT        ),
          std::make_tuple("name", TEXT_TYPE,     ColumnOptions::DEFAULT        ),
          std::make_tuple("device", TEXT_TYPE,     ColumnOptions::DEFAULT        ),
          std::make_tuple("uuid", TEXT_TYPE,     ColumnOptions::DEFAULT        ),
          std::make_tuple("size", BIGINT_TYPE,     ColumnOptions::DEFAULT        ),
          std::make_tuple("ejectable", INTEGER_TYPE,     ColumnOptions::DEFAULT        ),
          std::make_tuple("mountable", INTEGER_TYPE,     ColumnOptions::DEFAULT        ),
          std::make_tuple("writable", INTEGER_TYPE,     ColumnOptions::DEFAULT        ),
          std::make_tuple("content", TEXT_TYPE,     ColumnOptions::DEFAULT        ),
          std::make_tuple("media_name", TEXT_TYPE,     ColumnOptions::DEFAULT        ),
          std::make_tuple("vendor", TEXT_TYPE,     ColumnOptions::DEFAULT        ),
          std::make_tuple("filesystem", TEXT_TYPE,     ColumnOptions::DEFAULT        ),
          std::make_tuple("checksum", TEXT_TYPE,     ColumnOptions::DEFAULT        ),
          std::make_tuple("time", BIGINT_TYPE,     ColumnOptions::DEFAULT        ),
          std::make_tuple("eid", TEXT_TYPE,     ColumnOptions::HIDDEN        ),
      },
  { /* column aliases */ {"device", {"bsd_name"}},  },
  TableAttributes::EVENT_BASED |
  TableAttributes::NONE
};


#endif // defined(DECLARE_TABLE_IMPLEMENTATION) || defined(DECLARE_TABLE_DEF)

} // namespace tables

#if defined(DECLARE_TABLE_IMPLEMENTATION_disk_events) || defined(DECLARE_TABLE_FOREIGN_STUB_disk_events) || defined(DECLARE_TABLE_FOREIGN_STUB_disk_events)

TablePluginBase* tbl_disk_events_stub_new()
{
  return new TablePluginBase(tables::tbl_disk_events_def);
}

#endif // defined(DECLARE_TABLE_IMPLEMENTATION) || defined(DECLARE_TABLE_FOREIGN_STUB)

#if defined(DECLARE_TABLE_STRUCT_disk_events) || defined(DECLARE_TABLE_IMPLEMENTATION_disk_events)
struct tbl_disk_events_data_t {

      std::string      action;
      std::string      path;
      std::string      name;
      std::string      device;
      std::string      uuid;
      long long int      size;
      int      ejectable;
      int      mountable;
      int      writable;
      std::string      content;
      std::string      media_name;
      std::string      vendor;
      std::string      filesystem;
      std::string      checksum;
      long long int      time;
      std::string      eid;

  /*
   * Convert to osquery Row format
   */
  void toHashmap(Row &dest) const {
        dest["action"] = __sqliteField(action);
        dest["path"] = __sqliteField(path);
        dest["name"] = __sqliteField(name);
        dest["device"] = __sqliteField(device);
        dest["uuid"] = __sqliteField(uuid);
        dest["size"] = __sqliteField(size);
        dest["ejectable"] = __sqliteField(ejectable);
        dest["mountable"] = __sqliteField(mountable);
        dest["writable"] = __sqliteField(writable);
        dest["content"] = __sqliteField(content);
        dest["media_name"] = __sqliteField(media_name);
        dest["vendor"] = __sqliteField(vendor);
        dest["filesystem"] = __sqliteField(filesystem);
        dest["checksum"] = __sqliteField(checksum);
        dest["time"] = __sqliteField(time);
        dest["eid"] = __sqliteField(eid);
      }

};

#endif // DECLARE_TABLE_STRUCT_

#if defined(DECLARE_TABLE_IMPLEMENTATION_disk_events)

// forward declaration of funcs
namespace tables {

class disk_events {
 public:
  void genTable(RowYield& yield, QueryContext& context);
};
}

class diskEventsTablePlugin : public TablePluginBase {
public:
 diskEventsTablePlugin(const TableDefinition& tdef) : TablePluginBase(tdef) { }

 private:
  bool usesGenerator() const override { return true; }

  void generator(RowYield& yield, QueryContext& context) override {
    if (EventFactory::exists(getName())) {
      auto subscriber = EventFactory::getEventSubscriber(getName());
      return subscriber->genTable(yield, context);
    } else {
      LOG(ERROR) << "Subscriber table missing: " << getName();
    }
  }

};

TablePluginBase* tbl_disk_events_plugin_new()
{
  return new diskEventsTablePlugin(tables::tbl_disk_events_def);
}
#endif // defined(DECLARE_TABLE_IMPLEMENTATION)

extern TablePluginBase* tbl_disk_events_plugin_new();

} // namespace osquery