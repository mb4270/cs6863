#include <stdlib.h>
#include <unistd.h>
#include "tvbuff.h"
#include "ipv6-utils.h"
#include "guid-utils.h"
#include "exceptions.h"
#include "tvbuff.h"



static guint
tvb_len(tvbuff_t *tvbuff)
{
    guint len = 5;
    return len;
}

guint16
crc16_ccitt_tvb(tvbuff_t *tvbuff, guint len)
{

	guint tvb = 16;
	return tvb;
}
tvbuff_t* 
tvb_new_subset_rem(tvbuff_t* backing,
		const gint backing_offset){

	return backing;
}

tvbuff_t* 
tvb_new_sub(tvbuff_t* backing,
		const gint backing_offset, const gint backing_length, const gint reported_length)
{

	return backing;
}

int
proto_register_protocol(const char *name, const char *short_name,
			const char *filter_name)
{
	return 2;
}

void
proto_register_field_array(const int parent, hf_register_info *hf, const int num_records)
{
}

void
proto_register_subtree_array(gint *const *indices, int array_length)
{
}

proto_item *
proto_tree_add_text(proto_tree *tree, tvbuff_t *tvb, gint start, gint length,
		    const char *format, ...)
{
	proto_item *pi;
	return pi;
}

proto_item *
proto_tree_add_item(proto_tree *tree, const int hfindex, tvbuff_t *tvb,
    const gint start, gint length, const guint encoding)
{
	proto_item *pi;
	return pi;
}

proto_tree *
proto_item_add_subtree(proto_item *pi,	const gint idx) {
	field_info *fi = NULL;

	if (!pi)
		return NULL;

	return (proto_tree *)pi;
}

/* Add a FT_PROTOCOL to a proto_tree */
proto_item *
proto_tree_add_protocol_format(proto_tree *tree, int hfindex, tvbuff_t *tvb,
			       gint start, gint length, const char *format, ...)
{
	proto_item	  *pi = NULL;
	va_list		   ap;
	return pi;
}

void 
proto_item_set_len(proto_item *ti, const gint length)
{
}

proto_item *
proto_tree_add_uint(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
	gint length, guint32 value)
{
	proto_item *pi = NULL;
	return pi;
}

gchar *
ep_strdup_printf(const gchar *fmt, ...)
{
	va_list ap;
	gchar *dst = NULL;

	return dst;
}

void *
ep_alloc0(size_t size)
{
	return memset(ep_alloc(size),'\0',size);
}

void *
ep_alloc(size_t size)
{
	return memset(ep_alloc(size),'\0',size);
}
void 
col_set_str(column_info *cinfo, const gint col, const gchar * str)
{
}
void
dissector_add_uint(const char *name, const guint32 pattern, dissector_handle_t handle)
{
}

dissector_handle_t 
create_dissector_handle(dissector_t dissector,
    const int proto)
{
	dissector_handle_t handle = NULL;
	return handle;
}

dissector_handle_t 
find_dissector(const char *name)
{
	dissector_handle_t handle = NULL;
	return handle;
}
void
col_append_fstr(column_info *cinfo, const gint col, const gchar *format, ...)
{
}

void 
proto_item_append_text(proto_item *ti, const char *format, ...)
{

}

proto_item *
proto_tree_add_bitmask(proto_tree *parent_tree, tvbuff_t *tvb,
		       const guint offset, const int hf_hdr,
		       const gint ett, const int **fields,
		       const guint encoding)
{
	proto_item *item = NULL;
	int len;

		printf("Before while loop\n");
		while (*fields) {
		proto_tree_add_item(parent_tree, **fields, tvb, offset, len, encoding);
		if (!item) {
			printf( "Address of p: %p\n", *fields);
			printf("Value in pointer: %d\n", **fields);
			fields++;
			continue;
		}
		fields++;
	}


	return item;
}

void
register_dissector(const char *name, dissector_t dissector,
    const int proto)
{
}

dissector_table_t 
register_dissector_table(const char *name,
    const char *ui_name, const ftenum_t type, const int base)
{
	dissector_table_t table = NULL;
	return table;
}

void	
col_add_str(column_info *cinfo, const gint col, const gchar *str)
{

}
gchar *
format_text(const guchar *string, size_t len)
{
  static gchar *fmtbuf;
  return fmtbuf;

}
const value_string *
_match_strval_ext_init(const guint32 val, const value_string_ext *vse)
{
	return NULL;
}

module_t*
prefs_register_protocol(int id, void (*apply_cb)(void))
{
	module_t *mod;
	return mod;
}
gchar*     
format_text_wsp(const guchar *line, size_t len)
{

}

void EBCDIC_to_ASCII(guint8 *buf, guint bytes)
{

}

emem_strbuf_t*
ep_strbuf_new(const gchar *init)
{
	emem_strbuf_t *t;
	return t;
}

emem_strbuf_t*
ep_strbuf_append(emem_strbuf_t *strbuf, const gchar *str)
{
	emem_strbuf_t *t;
	return t;	
}

const gchar*
tvb_ip_to_str(tvbuff_t *tvb, const gint offset)
{

	static gchar *fmtbuf;
  	return fmtbuf;

}

const gchar*
val_to_str_const(const guint32 val, const value_string *vs, const char *unknown_str)
{
	gchar *fmtbuf;
  	return fmtbuf;
}


proto_item *
proto_tree_add_uint_format_value(proto_tree *tree, int hfindex, tvbuff_t *tvb,
	gint start, gint length, guint32 value, const char *format, ...)
{
	proto_item *p;
	return p;
}

const gchar* 
val_to_str_ext_const(const guint32 val, const value_string_ext *vs, const char *unknown_str)
{
	static gchar *fmtbuf;
  	return fmtbuf;
}

int
call_dissector(dissector_handle_t handle, tvbuff_t *tvb,
	       packet_info *pinfo, proto_tree *tree)
{
	int ret;
	if (ret == 0) {
		/*
		 * The protocol was disabled, or the dissector rejected
		 * it.  Just dissect this packet as data.
		 */
	}
	return ret;
}

void 
add_new_data_source(packet_info *pinfo, tvbuff_t *tvb,
    const char *name)
{

}
proto_item *
proto_tree_add_boolean(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
		       gint length, guint32 value)
{
	proto_item	  *pi;
	return pi;
}

void
col_add_fstr(column_info *cinfo, const gint col, const gchar *format, ...)
{

}
void *se_alloc(size_t size)
{

}

const char *decode_boolean_bitfield(const guint32 val, const guint32 mask, const int width,
  const char *truedesc, const char *falsedesc)
{
	char *a;
	return a;
}	

gboolean dissector_try_uint(dissector_table_t sub_dissectors, const guint32 uint_val, tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree)
{
	gboolean a;
	return a;

}

guint32 
crc32_ccitt_tvb(tvbuff_t *tvb, guint len)
{
	guint32 b;
	return b;

}
gchar*
bytes_to_str_punct(const guint8 *bd, int bd_len, gchar punct)
{
	gchar *txt;
	return txt;
}
gchar*
bytes_to_str(const guint8 *bd, int bd_len)
{

}

const guint8 *
epan_memmem(const guint8 *haystack, guint haystack_len, const guint8 *needle, guint needle_len)
{

}

const gchar 
*uint_get_manuf_name_if_known(const guint oid)
{

}

const char *proto_get_protocol_short_name(const protocol_t *protocol)
{

}

void	
col_clear(column_info *cinfo, const gint col)
{

}
gint	
check_col(column_info *cinfo, const gint col)
{

}

const gchar* 
val_to_str(const guint32 val, const value_string *vs, const char *fmt)
{

}

const char *
ipprotostr(const int proto)
{

}
int call_dissector_only(dissector_handle_t handle, tvbuff_t *tvb,
    packet_info *pinfo, proto_tree *tree)
{

}

void heur_dissector_add(const char *name, heur_dissector_t dissector,
    const int proto)
{

}

void prefs_register_enum_preference(module_t *module, const char *name, const char *title, const char *description, gint *var, const enum_val_t *enumvals, gboolean radio_buttons)
{

}
void prefs_register_bool_preference(module_t *module, const char *name, const char *title, const char *description, gboolean *var)
{

}

void prefs_register_uint_preference(module_t *module, const char *name, const char *title, const char *description, guint base, guint *var)
{
	
}


void except_throw(long l, long b, const char *abc)
{

}