/*-------------------------------------------------------------------------
 *
 * schemapg.h
 *    Schema_pg_xxx macros for use by relcache.c
 *
 * Portions Copyright (c) 1996-2018, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * NOTES
 *  ******************************
 *  *** DO NOT EDIT THIS FILE! ***
 *  ******************************
 *
 *  It has been GENERATED by src/backend/catalog/genbki.pl
 *
 *-------------------------------------------------------------------------
 */
#ifndef SCHEMAPG_H
#define SCHEMAPG_H

#define Schema_pg_proc \
{ 1255, {"proname"}, 19, -1, NAMEDATALEN, 1, 0, -1, -1, false, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1255, {"pronamespace"}, 26, -1, 4, 2, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1255, {"proowner"}, 26, -1, 4, 3, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1255, {"prolang"}, 26, -1, 4, 4, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1255, {"procost"}, 700, -1, 4, 5, 0, -1, -1, FLOAT4PASSBYVAL, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1255, {"prorows"}, 700, -1, 4, 6, 0, -1, -1, FLOAT4PASSBYVAL, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1255, {"provariadic"}, 26, -1, 4, 7, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1255, {"protransform"}, 24, -1, 4, 8, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1255, {"prokind"}, 18, -1, 1, 9, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1255, {"prosecdef"}, 16, -1, 1, 10, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1255, {"proleakproof"}, 16, -1, 1, 11, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1255, {"proisstrict"}, 16, -1, 1, 12, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1255, {"proretset"}, 16, -1, 1, 13, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1255, {"provolatile"}, 18, -1, 1, 14, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1255, {"proparallel"}, 18, -1, 1, 15, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1255, {"pronargs"}, 21, -1, 2, 16, 0, -1, -1, true, 'p', 's', true, false, false, '\0', false, true, 0, 0 }, \
{ 1255, {"pronargdefaults"}, 21, -1, 2, 17, 0, -1, -1, true, 'p', 's', true, false, false, '\0', false, true, 0, 0 }, \
{ 1255, {"prorettype"}, 26, -1, 4, 18, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1255, {"proargtypes"}, 30, -1, -1, 19, 1, -1, -1, false, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1255, {"proallargtypes"}, 1028, -1, -1, 20, 1, -1, -1, false, 'x', 'i', false, false, false, '\0', false, true, 0, 0 }, \
{ 1255, {"proargmodes"}, 1002, -1, -1, 21, 1, -1, -1, false, 'x', 'i', false, false, false, '\0', false, true, 0, 0 }, \
{ 1255, {"proargnames"}, 1009, -1, -1, 22, 1, -1, -1, false, 'x', 'i', false, false, false, '\0', false, true, 0, 100 }, \
{ 1255, {"proargdefaults"}, 194, -1, -1, 23, 0, -1, -1, false, 'x', 'i', false, false, false, '\0', false, true, 0, 100 }, \
{ 1255, {"protrftypes"}, 1028, -1, -1, 24, 1, -1, -1, false, 'x', 'i', false, false, false, '\0', false, true, 0, 0 }, \
{ 1255, {"prosrc"}, 25, -1, -1, 25, 0, -1, -1, false, 'x', 'i', true, false, false, '\0', false, true, 0, 100 }, \
{ 1255, {"probin"}, 25, -1, -1, 26, 0, -1, -1, false, 'x', 'i', false, false, false, '\0', false, true, 0, 100 }, \
{ 1255, {"proconfig"}, 1009, -1, -1, 27, 1, -1, -1, false, 'x', 'i', false, false, false, '\0', false, true, 0, 100 }, \
{ 1255, {"proacl"}, 1034, -1, -1, 28, 1, -1, -1, false, 'x', 'i', false, false, false, '\0', false, true, 0, 0 }

#define Schema_pg_type \
{ 1247, {"typname"}, 19, -1, NAMEDATALEN, 1, 0, -1, -1, false, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1247, {"typnamespace"}, 26, -1, 4, 2, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1247, {"typowner"}, 26, -1, 4, 3, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1247, {"typlen"}, 21, -1, 2, 4, 0, -1, -1, true, 'p', 's', true, false, false, '\0', false, true, 0, 0 }, \
{ 1247, {"typbyval"}, 16, -1, 1, 5, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1247, {"typtype"}, 18, -1, 1, 6, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1247, {"typcategory"}, 18, -1, 1, 7, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1247, {"typispreferred"}, 16, -1, 1, 8, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1247, {"typisdefined"}, 16, -1, 1, 9, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1247, {"typdelim"}, 18, -1, 1, 10, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1247, {"typrelid"}, 26, -1, 4, 11, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1247, {"typelem"}, 26, -1, 4, 12, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1247, {"typarray"}, 26, -1, 4, 13, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1247, {"typinput"}, 24, -1, 4, 14, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1247, {"typoutput"}, 24, -1, 4, 15, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1247, {"typreceive"}, 24, -1, 4, 16, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1247, {"typsend"}, 24, -1, 4, 17, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1247, {"typmodin"}, 24, -1, 4, 18, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1247, {"typmodout"}, 24, -1, 4, 19, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1247, {"typanalyze"}, 24, -1, 4, 20, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1247, {"typalign"}, 18, -1, 1, 21, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1247, {"typstorage"}, 18, -1, 1, 22, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1247, {"typnotnull"}, 16, -1, 1, 23, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1247, {"typbasetype"}, 26, -1, 4, 24, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1247, {"typtypmod"}, 23, -1, 4, 25, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1247, {"typndims"}, 23, -1, 4, 26, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1247, {"typcollation"}, 26, -1, 4, 27, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1247, {"typdefaultbin"}, 194, -1, -1, 28, 0, -1, -1, false, 'x', 'i', false, false, false, '\0', false, true, 0, 100 }, \
{ 1247, {"typdefault"}, 25, -1, -1, 29, 0, -1, -1, false, 'x', 'i', false, false, false, '\0', false, true, 0, 100 }, \
{ 1247, {"typacl"}, 1034, -1, -1, 30, 1, -1, -1, false, 'x', 'i', false, false, false, '\0', false, true, 0, 0 }

#define Schema_pg_attribute \
{ 1249, {"attrelid"}, 26, -1, 4, 1, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1249, {"attname"}, 19, -1, NAMEDATALEN, 2, 0, -1, -1, false, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1249, {"atttypid"}, 26, -1, 4, 3, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1249, {"attstattarget"}, 23, -1, 4, 4, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1249, {"attlen"}, 21, -1, 2, 5, 0, -1, -1, true, 'p', 's', true, false, false, '\0', false, true, 0, 0 }, \
{ 1249, {"attnum"}, 21, -1, 2, 6, 0, -1, -1, true, 'p', 's', true, false, false, '\0', false, true, 0, 0 }, \
{ 1249, {"attndims"}, 23, -1, 4, 7, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1249, {"attcacheoff"}, 23, -1, 4, 8, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1249, {"atttypmod"}, 23, -1, 4, 9, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1249, {"attbyval"}, 16, -1, 1, 10, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1249, {"attstorage"}, 18, -1, 1, 11, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1249, {"attalign"}, 18, -1, 1, 12, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1249, {"attnotnull"}, 16, -1, 1, 13, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1249, {"atthasdef"}, 16, -1, 1, 14, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1249, {"atthasmissing"}, 16, -1, 1, 15, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1249, {"attidentity"}, 18, -1, 1, 16, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1249, {"attisdropped"}, 16, -1, 1, 17, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1249, {"attislocal"}, 16, -1, 1, 18, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1249, {"attinhcount"}, 23, -1, 4, 19, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1249, {"attcollation"}, 26, -1, 4, 20, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1249, {"attacl"}, 1034, -1, -1, 21, 1, -1, -1, false, 'x', 'i', false, false, false, '\0', false, true, 0, 0 }, \
{ 1249, {"attoptions"}, 1009, -1, -1, 22, 1, -1, -1, false, 'x', 'i', false, false, false, '\0', false, true, 0, 100 }, \
{ 1249, {"attfdwoptions"}, 1009, -1, -1, 23, 1, -1, -1, false, 'x', 'i', false, false, false, '\0', false, true, 0, 100 }, \
{ 1249, {"attmissingval"}, 2277, -1, -1, 24, 0, -1, -1, false, 'x', 'd', false, false, false, '\0', false, true, 0, 0 }

#define Schema_pg_class \
{ 1259, {"relname"}, 19, -1, NAMEDATALEN, 1, 0, -1, -1, false, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1259, {"relnamespace"}, 26, -1, 4, 2, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1259, {"reltype"}, 26, -1, 4, 3, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1259, {"reloftype"}, 26, -1, 4, 4, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1259, {"relowner"}, 26, -1, 4, 5, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1259, {"relam"}, 26, -1, 4, 6, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1259, {"relfilenode"}, 26, -1, 4, 7, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1259, {"reltablespace"}, 26, -1, 4, 8, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1259, {"relpages"}, 23, -1, 4, 9, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1259, {"reltuples"}, 700, -1, 4, 10, 0, -1, -1, FLOAT4PASSBYVAL, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1259, {"relallvisible"}, 23, -1, 4, 11, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1259, {"reltoastrelid"}, 26, -1, 4, 12, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1259, {"relhasindex"}, 16, -1, 1, 13, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1259, {"relisshared"}, 16, -1, 1, 14, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1259, {"relpersistence"}, 18, -1, 1, 15, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1259, {"relkind"}, 18, -1, 1, 16, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1259, {"relnatts"}, 21, -1, 2, 17, 0, -1, -1, true, 'p', 's', true, false, false, '\0', false, true, 0, 0 }, \
{ 1259, {"relchecks"}, 21, -1, 2, 18, 0, -1, -1, true, 'p', 's', true, false, false, '\0', false, true, 0, 0 }, \
{ 1259, {"relhasoids"}, 16, -1, 1, 19, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1259, {"relhasrules"}, 16, -1, 1, 20, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1259, {"relhastriggers"}, 16, -1, 1, 21, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1259, {"relhassubclass"}, 16, -1, 1, 22, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1259, {"relrowsecurity"}, 16, -1, 1, 23, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1259, {"relforcerowsecurity"}, 16, -1, 1, 24, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1259, {"relispopulated"}, 16, -1, 1, 25, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1259, {"relreplident"}, 18, -1, 1, 26, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1259, {"relispartition"}, 16, -1, 1, 27, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1259, {"relrewrite"}, 26, -1, 4, 28, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1259, {"relfrozenxid"}, 28, -1, 4, 29, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1259, {"relminmxid"}, 28, -1, 4, 30, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1259, {"relacl"}, 1034, -1, -1, 31, 1, -1, -1, false, 'x', 'i', false, false, false, '\0', false, true, 0, 0 }, \
{ 1259, {"reloptions"}, 1009, -1, -1, 32, 1, -1, -1, false, 'x', 'i', false, false, false, '\0', false, true, 0, 100 }, \
{ 1259, {"relpartbound"}, 194, -1, -1, 33, 0, -1, -1, false, 'x', 'i', false, false, false, '\0', false, true, 0, 100 }

#define Schema_pg_index \
{ 2610, {"indexrelid"}, 26, -1, 4, 1, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 2610, {"indrelid"}, 26, -1, 4, 2, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 2610, {"indnatts"}, 21, -1, 2, 3, 0, -1, -1, true, 'p', 's', true, false, false, '\0', false, true, 0, 0 }, \
{ 2610, {"indnkeyatts"}, 21, -1, 2, 4, 0, -1, -1, true, 'p', 's', true, false, false, '\0', false, true, 0, 0 }, \
{ 2610, {"indisunique"}, 16, -1, 1, 5, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 2610, {"indisprimary"}, 16, -1, 1, 6, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 2610, {"indisexclusion"}, 16, -1, 1, 7, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 2610, {"indimmediate"}, 16, -1, 1, 8, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 2610, {"indisclustered"}, 16, -1, 1, 9, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 2610, {"indisvalid"}, 16, -1, 1, 10, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 2610, {"indcheckxmin"}, 16, -1, 1, 11, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 2610, {"indisready"}, 16, -1, 1, 12, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 2610, {"indislive"}, 16, -1, 1, 13, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 2610, {"indisreplident"}, 16, -1, 1, 14, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 2610, {"indkey"}, 22, -1, -1, 15, 1, -1, -1, false, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 2610, {"indcollation"}, 30, -1, -1, 16, 1, -1, -1, false, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 2610, {"indclass"}, 30, -1, -1, 17, 1, -1, -1, false, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 2610, {"indoption"}, 22, -1, -1, 18, 1, -1, -1, false, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 2610, {"indexprs"}, 194, -1, -1, 19, 0, -1, -1, false, 'x', 'i', false, false, false, '\0', false, true, 0, 100 }, \
{ 2610, {"indpred"}, 194, -1, -1, 20, 0, -1, -1, false, 'x', 'i', false, false, false, '\0', false, true, 0, 100 }

#define Schema_pg_database \
{ 1262, {"datname"}, 19, -1, NAMEDATALEN, 1, 0, -1, -1, false, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1262, {"datdba"}, 26, -1, 4, 2, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1262, {"encoding"}, 23, -1, 4, 3, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1262, {"datcollate"}, 19, -1, NAMEDATALEN, 4, 0, -1, -1, false, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1262, {"datctype"}, 19, -1, NAMEDATALEN, 5, 0, -1, -1, false, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1262, {"datistemplate"}, 16, -1, 1, 6, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1262, {"datallowconn"}, 16, -1, 1, 7, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1262, {"datconnlimit"}, 23, -1, 4, 8, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1262, {"datlastsysoid"}, 26, -1, 4, 9, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1262, {"datfrozenxid"}, 28, -1, 4, 10, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1262, {"datminmxid"}, 28, -1, 4, 11, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1262, {"dattablespace"}, 26, -1, 4, 12, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1262, {"datacl"}, 1034, -1, -1, 13, 1, -1, -1, false, 'x', 'i', false, false, false, '\0', false, true, 0, 0 }

#define Schema_pg_authid \
{ 1260, {"rolname"}, 19, -1, NAMEDATALEN, 1, 0, -1, -1, false, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1260, {"rolsuper"}, 16, -1, 1, 2, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1260, {"rolinherit"}, 16, -1, 1, 3, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1260, {"rolcreaterole"}, 16, -1, 1, 4, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1260, {"rolcreatedb"}, 16, -1, 1, 5, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1260, {"rolcanlogin"}, 16, -1, 1, 6, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1260, {"rolreplication"}, 16, -1, 1, 7, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1260, {"rolbypassrls"}, 16, -1, 1, 8, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 1260, {"rolconnlimit"}, 23, -1, 4, 9, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1260, {"rolpassword"}, 25, -1, -1, 10, 0, -1, -1, false, 'x', 'i', false, false, false, '\0', false, true, 0, 100 }, \
{ 1260, {"rolvaliduntil"}, 1184, -1, 8, 11, 0, -1, -1, FLOAT8PASSBYVAL, 'p', 'd', false, false, false, '\0', false, true, 0, 0 }

#define Schema_pg_auth_members \
{ 1261, {"roleid"}, 26, -1, 4, 1, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1261, {"member"}, 26, -1, 4, 2, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1261, {"grantor"}, 26, -1, 4, 3, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 1261, {"admin_option"}, 16, -1, 1, 4, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }

#define Schema_pg_shseclabel \
{ 3592, {"objoid"}, 26, -1, 4, 1, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 3592, {"classoid"}, 26, -1, 4, 2, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 3592, {"provider"}, 25, -1, -1, 3, 0, -1, -1, false, 'x', 'i', true, false, false, '\0', false, true, 0, 100 }, \
{ 3592, {"label"}, 25, -1, -1, 4, 0, -1, -1, false, 'x', 'i', true, false, false, '\0', false, true, 0, 100 }

#define Schema_pg_subscription \
{ 6100, {"subdbid"}, 26, -1, 4, 1, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 6100, {"subname"}, 19, -1, NAMEDATALEN, 2, 0, -1, -1, false, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 6100, {"subowner"}, 26, -1, 4, 3, 0, -1, -1, true, 'p', 'i', true, false, false, '\0', false, true, 0, 0 }, \
{ 6100, {"subenabled"}, 16, -1, 1, 4, 0, -1, -1, true, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 6100, {"subconninfo"}, 25, -1, -1, 5, 0, -1, -1, false, 'x', 'i', true, false, false, '\0', false, true, 0, 100 }, \
{ 6100, {"subslotname"}, 19, -1, NAMEDATALEN, 6, 0, -1, -1, false, 'p', 'c', true, false, false, '\0', false, true, 0, 0 }, \
{ 6100, {"subsynccommit"}, 25, -1, -1, 7, 0, -1, -1, false, 'x', 'i', true, false, false, '\0', false, true, 0, 100 }, \
{ 6100, {"subpublications"}, 1009, -1, -1, 8, 1, -1, -1, false, 'x', 'i', true, false, false, '\0', false, true, 0, 100 }

#endif							/* SCHEMAPG_H */
