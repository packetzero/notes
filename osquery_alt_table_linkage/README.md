## Proposal: Alternative TablePlugin linkage

### Goals

The goals of this refactoring are:
 1. Simplify the TablePlugin class, hiding the table cache, table definition.
 2. Simplify table linkage.  Move TablePlugin creation to the table implementation files.
 3. Take advantage of code generation to provide table specific structs to make implementation code cleaner.

### Background

The current osquery build system linkage to table implementations can be summarized as follows:
 - There are 4 "categories" of table linkages: **utils** (part of libosquery), **additional** (available), **foreign** (empty), and **blacklisted** (not available).
 - A .cpp file is generated for each spec file and placed in appropriate subdirectory of build/platform/generated/tables_CATEGORY
 - A CATEGORY_amalgamation.cpp file is built from the bodies of the generated .cpp files in the corresponding tables_CATEGORY subdirectory.
 - The utils and additional amalgamations have TablePlugin class declarations which refer to the generator, generate, or event_subscriber symbol defined in table .spec files.  The TablePlugins also have code to use a table cache for tables that have CACHEABLE attribute.
 - The foreign amalgamations have TablePlugin class declarations that return empty results, and are only registered if registerForeignTables() is called (such as when --foreign cmdline flag is present).

### Proposed Changes
1. Added a TableDefinition struct that encapsulates table .spec definition.
![TableDefinition ](./images/ssTableDefinition.png)
2. Added a TableCache interface abstraction, with TableCacheDB and TableCacheDisabled implementations.
![TableCache ](./images/ssTableCache.png)

3. Created a TablePluginBase class

### Advantages of Refactor
1. Table .spec files no longer need to include **implementation** declarations.  Linkage symbol is tbl_TABLENAME_new().
