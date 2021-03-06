/* LogRow.c generated by valac 0.50.2, the Vala compiler
 * generated from LogRow.vala, do not modify */

#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <glib.h>
#include <gtk/gtk.h>

#define KHRONOS_TYPE_LOG (khronos_log_get_type ())
#define KHRONOS_LOG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KHRONOS_TYPE_LOG, KhronosLog))
#define KHRONOS_LOG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KHRONOS_TYPE_LOG, KhronosLogClass))
#define KHRONOS_IS_LOG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KHRONOS_TYPE_LOG))
#define KHRONOS_IS_LOG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KHRONOS_TYPE_LOG))
#define KHRONOS_LOG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KHRONOS_TYPE_LOG, KhronosLogClass))

typedef struct _KhronosLog KhronosLog;
typedef struct _KhronosLogClass KhronosLogClass;
typedef struct _KhronosLogPrivate KhronosLogPrivate;
enum  {
	KHRONOS_LOG_0_PROPERTY,
	KHRONOS_LOG_NAME_PROPERTY,
	KHRONOS_LOG_TIMEDATE_PROPERTY,
	KHRONOS_LOG_NUM_PROPERTIES
};
static GParamSpec* khronos_log_properties[KHRONOS_LOG_NUM_PROPERTIES];
#define _g_free0(var) (var = (g_free (var), NULL))

#define KHRONOS_TYPE_LOG_ROW (khronos_log_row_get_type ())
#define KHRONOS_LOG_ROW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KHRONOS_TYPE_LOG_ROW, KhronosLogRow))
#define KHRONOS_LOG_ROW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KHRONOS_TYPE_LOG_ROW, KhronosLogRowClass))
#define KHRONOS_IS_LOG_ROW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KHRONOS_TYPE_LOG_ROW))
#define KHRONOS_IS_LOG_ROW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KHRONOS_TYPE_LOG_ROW))
#define KHRONOS_LOG_ROW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KHRONOS_TYPE_LOG_ROW, KhronosLogRowClass))

typedef struct _KhronosLogRow KhronosLogRow;
typedef struct _KhronosLogRowClass KhronosLogRowClass;
typedef struct _KhronosLogRowPrivate KhronosLogRowPrivate;
enum  {
	KHRONOS_LOG_ROW_0_PROPERTY,
	KHRONOS_LOG_ROW_LOG_PROPERTY,
	KHRONOS_LOG_ROW_NUM_PROPERTIES
};
static GParamSpec* khronos_log_row_properties[KHRONOS_LOG_ROW_NUM_PROPERTIES];

struct _KhronosLog {
	GObject parent_instance;
	KhronosLogPrivate * priv;
};

struct _KhronosLogClass {
	GObjectClass parent_class;
};

struct _KhronosLogPrivate {
	gchar* _name;
	gchar* _timedate;
};

struct _KhronosLogRow {
	GtkListBoxRow parent_instance;
	KhronosLogRowPrivate * priv;
};

struct _KhronosLogRowClass {
	GtkListBoxRowClass parent_class;
};

struct _KhronosLogRowPrivate {
	KhronosLog* _log;
};

static gint KhronosLog_private_offset;
static gpointer khronos_log_parent_class = NULL;
static gint KhronosLogRow_private_offset;
static gpointer khronos_log_row_parent_class = NULL;

GType khronos_log_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (KhronosLog, g_object_unref)
KhronosLog* khronos_log_new (void);
KhronosLog* khronos_log_construct (GType object_type);
const gchar* khronos_log_get_name (KhronosLog* self);
void khronos_log_set_name (KhronosLog* self,
                           const gchar* value);
const gchar* khronos_log_get_timedate (KhronosLog* self);
void khronos_log_set_timedate (KhronosLog* self,
                               const gchar* value);
static void khronos_log_finalize (GObject * obj);
static GType khronos_log_get_type_once (void);
static void _vala_khronos_log_get_property (GObject * object,
                                     guint property_id,
                                     GValue * value,
                                     GParamSpec * pspec);
static void _vala_khronos_log_set_property (GObject * object,
                                     guint property_id,
                                     const GValue * value,
                                     GParamSpec * pspec);
GType khronos_log_row_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (KhronosLogRow, g_object_unref)
KhronosLogRow* khronos_log_row_new (KhronosLog* log);
KhronosLogRow* khronos_log_row_construct (GType object_type,
                                          KhronosLog* log);
KhronosLog* khronos_log_row_get_log (KhronosLogRow* self);
static void khronos_log_row_set_log (KhronosLogRow* self,
                              KhronosLog* value);
static void khronos_log_row_finalize (GObject * obj);
static GType khronos_log_row_get_type_once (void);
static void _vala_khronos_log_row_get_property (GObject * object,
                                         guint property_id,
                                         GValue * value,
                                         GParamSpec * pspec);
static void _vala_khronos_log_row_set_property (GObject * object,
                                         guint property_id,
                                         const GValue * value,
                                         GParamSpec * pspec);

static inline gpointer
khronos_log_get_instance_private (KhronosLog* self)
{
	return G_STRUCT_MEMBER_P (self, KhronosLog_private_offset);
}

KhronosLog*
khronos_log_construct (GType object_type)
{
	KhronosLog * self = NULL;
#line 2 "../src/Widgets/LogRow.vala"
	self = (KhronosLog*) g_object_new (object_type, NULL);
#line 2 "../src/Widgets/LogRow.vala"
	return self;
#line 132 "LogRow.c"
}

KhronosLog*
khronos_log_new (void)
{
#line 2 "../src/Widgets/LogRow.vala"
	return khronos_log_construct (KHRONOS_TYPE_LOG);
#line 140 "LogRow.c"
}

const gchar*
khronos_log_get_name (KhronosLog* self)
{
	const gchar* result;
	const gchar* _tmp0_;
#line 3 "../src/Widgets/LogRow.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 3 "../src/Widgets/LogRow.vala"
	_tmp0_ = self->priv->_name;
#line 3 "../src/Widgets/LogRow.vala"
	result = _tmp0_;
#line 3 "../src/Widgets/LogRow.vala"
	return result;
#line 156 "LogRow.c"
}

void
khronos_log_set_name (KhronosLog* self,
                      const gchar* value)
{
#line 3 "../src/Widgets/LogRow.vala"
	g_return_if_fail (self != NULL);
#line 3 "../src/Widgets/LogRow.vala"
	if (g_strcmp0 (value, khronos_log_get_name (self)) != 0) {
#line 167 "LogRow.c"
		gchar* _tmp0_;
#line 3 "../src/Widgets/LogRow.vala"
		_tmp0_ = g_strdup (value);
#line 3 "../src/Widgets/LogRow.vala"
		_g_free0 (self->priv->_name);
#line 3 "../src/Widgets/LogRow.vala"
		self->priv->_name = _tmp0_;
#line 3 "../src/Widgets/LogRow.vala"
		g_object_notify_by_pspec ((GObject *) self, khronos_log_properties[KHRONOS_LOG_NAME_PROPERTY]);
#line 177 "LogRow.c"
	}
}

const gchar*
khronos_log_get_timedate (KhronosLog* self)
{
	const gchar* result;
	const gchar* _tmp0_;
#line 4 "../src/Widgets/LogRow.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 4 "../src/Widgets/LogRow.vala"
	_tmp0_ = self->priv->_timedate;
#line 4 "../src/Widgets/LogRow.vala"
	result = _tmp0_;
#line 4 "../src/Widgets/LogRow.vala"
	return result;
#line 194 "LogRow.c"
}

void
khronos_log_set_timedate (KhronosLog* self,
                          const gchar* value)
{
#line 4 "../src/Widgets/LogRow.vala"
	g_return_if_fail (self != NULL);
#line 4 "../src/Widgets/LogRow.vala"
	if (g_strcmp0 (value, khronos_log_get_timedate (self)) != 0) {
#line 205 "LogRow.c"
		gchar* _tmp0_;
#line 4 "../src/Widgets/LogRow.vala"
		_tmp0_ = g_strdup (value);
#line 4 "../src/Widgets/LogRow.vala"
		_g_free0 (self->priv->_timedate);
#line 4 "../src/Widgets/LogRow.vala"
		self->priv->_timedate = _tmp0_;
#line 4 "../src/Widgets/LogRow.vala"
		g_object_notify_by_pspec ((GObject *) self, khronos_log_properties[KHRONOS_LOG_TIMEDATE_PROPERTY]);
#line 215 "LogRow.c"
	}
}

static void
khronos_log_class_init (KhronosLogClass * klass,
                        gpointer klass_data)
{
#line 2 "../src/Widgets/LogRow.vala"
	khronos_log_parent_class = g_type_class_peek_parent (klass);
#line 2 "../src/Widgets/LogRow.vala"
	g_type_class_adjust_private_offset (klass, &KhronosLog_private_offset);
#line 2 "../src/Widgets/LogRow.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_khronos_log_get_property;
#line 2 "../src/Widgets/LogRow.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_khronos_log_set_property;
#line 2 "../src/Widgets/LogRow.vala"
	G_OBJECT_CLASS (klass)->finalize = khronos_log_finalize;
#line 2 "../src/Widgets/LogRow.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), KHRONOS_LOG_NAME_PROPERTY, khronos_log_properties[KHRONOS_LOG_NAME_PROPERTY] = g_param_spec_string ("name", "name", "name", NULL, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 2 "../src/Widgets/LogRow.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), KHRONOS_LOG_TIMEDATE_PROPERTY, khronos_log_properties[KHRONOS_LOG_TIMEDATE_PROPERTY] = g_param_spec_string ("timedate", "timedate", "timedate", NULL, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 237 "LogRow.c"
}

static void
khronos_log_instance_init (KhronosLog * self,
                           gpointer klass)
{
#line 2 "../src/Widgets/LogRow.vala"
	self->priv = khronos_log_get_instance_private (self);
#line 246 "LogRow.c"
}

static void
khronos_log_finalize (GObject * obj)
{
	KhronosLog * self;
#line 2 "../src/Widgets/LogRow.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, KHRONOS_TYPE_LOG, KhronosLog);
#line 3 "../src/Widgets/LogRow.vala"
	_g_free0 (self->priv->_name);
#line 4 "../src/Widgets/LogRow.vala"
	_g_free0 (self->priv->_timedate);
#line 2 "../src/Widgets/LogRow.vala"
	G_OBJECT_CLASS (khronos_log_parent_class)->finalize (obj);
#line 261 "LogRow.c"
}

static GType
khronos_log_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (KhronosLogClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) khronos_log_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (KhronosLog), 0, (GInstanceInitFunc) khronos_log_instance_init, NULL };
	GType khronos_log_type_id;
	khronos_log_type_id = g_type_register_static (G_TYPE_OBJECT, "KhronosLog", &g_define_type_info, 0);
	KhronosLog_private_offset = g_type_add_instance_private (khronos_log_type_id, sizeof (KhronosLogPrivate));
	return khronos_log_type_id;
}

GType
khronos_log_get_type (void)
{
	static volatile gsize khronos_log_type_id__volatile = 0;
	if (g_once_init_enter (&khronos_log_type_id__volatile)) {
		GType khronos_log_type_id;
		khronos_log_type_id = khronos_log_get_type_once ();
		g_once_init_leave (&khronos_log_type_id__volatile, khronos_log_type_id);
	}
	return khronos_log_type_id__volatile;
}

static void
_vala_khronos_log_get_property (GObject * object,
                                guint property_id,
                                GValue * value,
                                GParamSpec * pspec)
{
	KhronosLog * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, KHRONOS_TYPE_LOG, KhronosLog);
#line 2 "../src/Widgets/LogRow.vala"
	switch (property_id) {
#line 2 "../src/Widgets/LogRow.vala"
		case KHRONOS_LOG_NAME_PROPERTY:
#line 2 "../src/Widgets/LogRow.vala"
		g_value_set_string (value, khronos_log_get_name (self));
#line 2 "../src/Widgets/LogRow.vala"
		break;
#line 2 "../src/Widgets/LogRow.vala"
		case KHRONOS_LOG_TIMEDATE_PROPERTY:
#line 2 "../src/Widgets/LogRow.vala"
		g_value_set_string (value, khronos_log_get_timedate (self));
#line 2 "../src/Widgets/LogRow.vala"
		break;
#line 308 "LogRow.c"
		default:
#line 2 "../src/Widgets/LogRow.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 2 "../src/Widgets/LogRow.vala"
		break;
#line 314 "LogRow.c"
	}
}

static void
_vala_khronos_log_set_property (GObject * object,
                                guint property_id,
                                const GValue * value,
                                GParamSpec * pspec)
{
	KhronosLog * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, KHRONOS_TYPE_LOG, KhronosLog);
#line 2 "../src/Widgets/LogRow.vala"
	switch (property_id) {
#line 2 "../src/Widgets/LogRow.vala"
		case KHRONOS_LOG_NAME_PROPERTY:
#line 2 "../src/Widgets/LogRow.vala"
		khronos_log_set_name (self, g_value_get_string (value));
#line 2 "../src/Widgets/LogRow.vala"
		break;
#line 2 "../src/Widgets/LogRow.vala"
		case KHRONOS_LOG_TIMEDATE_PROPERTY:
#line 2 "../src/Widgets/LogRow.vala"
		khronos_log_set_timedate (self, g_value_get_string (value));
#line 2 "../src/Widgets/LogRow.vala"
		break;
#line 340 "LogRow.c"
		default:
#line 2 "../src/Widgets/LogRow.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 2 "../src/Widgets/LogRow.vala"
		break;
#line 346 "LogRow.c"
	}
}

static inline gpointer
khronos_log_row_get_instance_private (KhronosLogRow* self)
{
	return G_STRUCT_MEMBER_P (self, KhronosLogRow_private_offset);
}

KhronosLogRow*
khronos_log_row_construct (GType object_type,
                           KhronosLog* log)
{
	KhronosLogRow * self = NULL;
#line 11 "../src/Widgets/LogRow.vala"
	self = (KhronosLogRow*) g_object_new (object_type, "log", log, NULL);
#line 10 "../src/Widgets/LogRow.vala"
	return self;
#line 365 "LogRow.c"
}

KhronosLogRow*
khronos_log_row_new (KhronosLog* log)
{
#line 10 "../src/Widgets/LogRow.vala"
	return khronos_log_row_construct (KHRONOS_TYPE_LOG_ROW, log);
#line 373 "LogRow.c"
}

KhronosLog*
khronos_log_row_get_log (KhronosLogRow* self)
{
	KhronosLog* result;
	KhronosLog* _tmp0_;
#line 9 "../src/Widgets/LogRow.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 9 "../src/Widgets/LogRow.vala"
	_tmp0_ = self->priv->_log;
#line 9 "../src/Widgets/LogRow.vala"
	result = _tmp0_;
#line 9 "../src/Widgets/LogRow.vala"
	return result;
#line 389 "LogRow.c"
}

static void
khronos_log_row_set_log (KhronosLogRow* self,
                         KhronosLog* value)
{
#line 9 "../src/Widgets/LogRow.vala"
	g_return_if_fail (self != NULL);
#line 9 "../src/Widgets/LogRow.vala"
	if (khronos_log_row_get_log (self) != value) {
#line 9 "../src/Widgets/LogRow.vala"
		self->priv->_log = value;
#line 9 "../src/Widgets/LogRow.vala"
		g_object_notify_by_pspec ((GObject *) self, khronos_log_row_properties[KHRONOS_LOG_ROW_LOG_PROPERTY]);
#line 404 "LogRow.c"
	}
}

static void
khronos_log_row_class_init (KhronosLogRowClass * klass,
                            gpointer klass_data)
{
#line 8 "../src/Widgets/LogRow.vala"
	khronos_log_row_parent_class = g_type_class_peek_parent (klass);
#line 8 "../src/Widgets/LogRow.vala"
	g_type_class_adjust_private_offset (klass, &KhronosLogRow_private_offset);
#line 8 "../src/Widgets/LogRow.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_khronos_log_row_get_property;
#line 8 "../src/Widgets/LogRow.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_khronos_log_row_set_property;
#line 8 "../src/Widgets/LogRow.vala"
	G_OBJECT_CLASS (klass)->finalize = khronos_log_row_finalize;
#line 8 "../src/Widgets/LogRow.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), KHRONOS_LOG_ROW_LOG_PROPERTY, khronos_log_row_properties[KHRONOS_LOG_ROW_LOG_PROPERTY] = g_param_spec_object ("log", "log", "log", KHRONOS_TYPE_LOG, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
#line 8 "../src/Widgets/LogRow.vala"
	gtk_widget_class_set_template_from_resource (GTK_WIDGET_CLASS (klass), "/io/github/lainsce/Khronos/logrow.ui");
#line 426 "LogRow.c"
}

static void
khronos_log_row_instance_init (KhronosLogRow * self,
                               gpointer klass)
{
#line 8 "../src/Widgets/LogRow.vala"
	self->priv = khronos_log_row_get_instance_private (self);
#line 8 "../src/Widgets/LogRow.vala"
	gtk_widget_init_template (GTK_WIDGET (self));
#line 437 "LogRow.c"
}

static void
khronos_log_row_finalize (GObject * obj)
{
	KhronosLogRow * self;
#line 8 "../src/Widgets/LogRow.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, KHRONOS_TYPE_LOG_ROW, KhronosLogRow);
#line 8 "../src/Widgets/LogRow.vala"
	G_OBJECT_CLASS (khronos_log_row_parent_class)->finalize (obj);
#line 448 "LogRow.c"
}

static GType
khronos_log_row_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (KhronosLogRowClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) khronos_log_row_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (KhronosLogRow), 0, (GInstanceInitFunc) khronos_log_row_instance_init, NULL };
	GType khronos_log_row_type_id;
	khronos_log_row_type_id = g_type_register_static (gtk_list_box_row_get_type (), "KhronosLogRow", &g_define_type_info, 0);
	KhronosLogRow_private_offset = g_type_add_instance_private (khronos_log_row_type_id, sizeof (KhronosLogRowPrivate));
	return khronos_log_row_type_id;
}

GType
khronos_log_row_get_type (void)
{
	static volatile gsize khronos_log_row_type_id__volatile = 0;
	if (g_once_init_enter (&khronos_log_row_type_id__volatile)) {
		GType khronos_log_row_type_id;
		khronos_log_row_type_id = khronos_log_row_get_type_once ();
		g_once_init_leave (&khronos_log_row_type_id__volatile, khronos_log_row_type_id);
	}
	return khronos_log_row_type_id__volatile;
}

static void
_vala_khronos_log_row_get_property (GObject * object,
                                    guint property_id,
                                    GValue * value,
                                    GParamSpec * pspec)
{
	KhronosLogRow * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, KHRONOS_TYPE_LOG_ROW, KhronosLogRow);
#line 8 "../src/Widgets/LogRow.vala"
	switch (property_id) {
#line 8 "../src/Widgets/LogRow.vala"
		case KHRONOS_LOG_ROW_LOG_PROPERTY:
#line 8 "../src/Widgets/LogRow.vala"
		g_value_set_object (value, khronos_log_row_get_log (self));
#line 8 "../src/Widgets/LogRow.vala"
		break;
#line 489 "LogRow.c"
		default:
#line 8 "../src/Widgets/LogRow.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 8 "../src/Widgets/LogRow.vala"
		break;
#line 495 "LogRow.c"
	}
}

static void
_vala_khronos_log_row_set_property (GObject * object,
                                    guint property_id,
                                    const GValue * value,
                                    GParamSpec * pspec)
{
	KhronosLogRow * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, KHRONOS_TYPE_LOG_ROW, KhronosLogRow);
#line 8 "../src/Widgets/LogRow.vala"
	switch (property_id) {
#line 8 "../src/Widgets/LogRow.vala"
		case KHRONOS_LOG_ROW_LOG_PROPERTY:
#line 8 "../src/Widgets/LogRow.vala"
		khronos_log_row_set_log (self, g_value_get_object (value));
#line 8 "../src/Widgets/LogRow.vala"
		break;
#line 515 "LogRow.c"
		default:
#line 8 "../src/Widgets/LogRow.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 8 "../src/Widgets/LogRow.vala"
		break;
#line 521 "LogRow.c"
	}
}

