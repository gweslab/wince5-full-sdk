//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//
// Use of this source code is subject to the terms of the Microsoft end-user
// license agreement (EULA) under which you licensed this SOFTWARE PRODUCT.
// If you did not accept the terms of the EULA, you are not authorized to use
// this source code. For a copy of the EULA, please see the LICENSE.RTF on your
// install media.

#ifndef I_SHDOCLC_H_
#define I_SHDOCLC_H_

#define IDC_STATIC                  -1

// Accelerator ID
#define ACCEL_DOCVIEW			    0x101

#define IDS_MAYSAVEDOCUMENT         0x201
#define IDS_CANTACCESSDOCUMENT      0x202
#define IDS_EE_UNABLETOPRINT	    0x203

#define IDS_SSL40                   0x205
#define IDS_SSL128                  0x206
#define IDS_SSL_FORTEZZA            0x207
#define IDS_SSL56                   0x208

// ReBar stuff
#define IDS_SUBSTR_PRD				0x22C
#define IDS_SUBSTR_PVER				0x22D

// OC stuff
#define IDS_VERB_EDIT				0x240

// Progress bar text
#define IDS_BINDSTATUS				0x260
#define IDS_BINDSTATUS_FIN			0x261	// (IDS_BINDSTATUS+BINDSTATUS_FINDINGRESOURCE)
#define IDS_BINDSTATUS_CON			0x262	// (IDS_BINDSTATUS+BINDSTATUS_CONNECTING)
#define IDS_BINDSTATUS_RED			0x263	// (IDS_BINDSTATUS+BINDSTATUS_REDIRECTING)
#define IDS_BINDSTATUS_BEG			0x264	// (IDS_BINDSTATUS+BINDSTATUS_BEGINDOWNLOADDATA)
#define IDS_BINDSTATUS_DOW			0x265	// (IDS_BINDSTATUS+BINDSTATUS_DOWNLOADINGDATA  )
#define IDS_BINDSTATUS_END			0x266	// (IDS_BINDSTATUS+BINDSTATUS_ENDDOWNLOADDATA  )
#define IDS_BINDSTATUS_BEGC			0x267	// (IDS_BINDSTATUS+BINDSTATUS_BEGINDOWNLOADCOMPONENTS)
#define IDS_BINDSTATUS_INSC			0x268	// (IDS_BINDSTATUS+BINDSTATUS_INSTALLINGCOMPONENTS        )
#define IDS_BINDSTATUS_ENDC			0x269	// (IDS_BINDSTATUS+BINDSTATUS_ENDDOWNLOADCOMPONENTS)
#define IDS_BINDSTATUS_USEC			0x26a	// (IDS_BINDSTATUS+BINDSTATUS_USINGCACHEDCOPY)
#define IDS_BINDSTATUS_SEND			0x26b	// (IDS_BINDSTATUS+BINDSTATUS_SENDINGREQUEST )
#define IDS_BINDSTATUS_PROXYDETECTING 0x26c 

#define IDS_TITLE                   0x2D3
#define IDS_ERROR_GOTO              0x2D4
#define IDS_NAME                    0x2D6	// 726

#define IDS_CANTDOWNLOAD            0x2D8	// 728
#define IDS_TARGETFILE              0x2DA	// 730  String for target file of downloading
#define IDS_DOWNLOADCOMPLETE        0x2DB	// 731	Download completed
#define IDS_SAVING                  0x2E0	// 736
#define IDS_OPENING                 0x2E1	// 737
#define IDS_ESTIMATE                0x2E2	// 738	Estimated time string for progress (B/sec)
#define IDS_SAVED					0x2E4	// 740
#define IDS_BYTESCOPIED             0x2E5	// 741	Progress text when ulMax is 0 (unknown)
#define IDS_DOCUMENT                0x2E8	// 744
#define IDS_CANTSHELLEX				0x2F4	// 756	Shell Execute on the URL failed
#define IDS_TITLEBYTES				0x2F8	// 760	Download title with % loaded
#define IDS_TITLEPERCENT			0x2F9	// 761  Download title with bytes copied
#define IDS_DEFDLGTITLE				0x316   // 790
#define IDS_BYTESTIME               0x31D   // 797
#define IDS_CLOSE                   0x320   // 800
#define IDS_EXTDOCUMENT             0x32B   // 811

#define IDS_OPENFROMINTERNET        0x398	// 920
#define IDS_SAVEFILETODISK          0x399	// 921
#define IDS_ALLFILES                0x4B0	// 1200
#define IDS_BROWSEFILTER            0x4B1   // 1201
#define IDS_DOWNLOADFAILED          0x4B2   // 1202
#define IDS_TRANSFERRATE            0x4B3	// 1203
#define IDS_DOWNLOADTOCACHE         0x4B4	// 1204
#define IDS_SECURITYALERT           0x4B6   // 1206
#define IDS_DOWNLOADDISALLOWED      0x4B7   // 1207
#define	IDS_NOT_ENOUGH_STORAGE		0x4B8
#define IDS_SHURL_ERR_PARSE_NOTALLOWED	0x4BD	// 1213

#define IDS_SHELLEXPLORER           0x4F1

#define IDS_RESTRICTED              0xBBF	// 3007

#define IDR_BROWSE_CONTEXT_MENU	    24641	// 0x6041 

// DLG
#define DLG_DOWNLOADPROGRESS        0x1100
#define IDD_NAME                    0x1102
#define IDD_OPENIT                  0x1103
#define IDD_PROBAR                  0x1104
#define IDD_TIMEEST                 0x1105
#define IDD_SAVEAS                  0x1106
#define IDD_NOFILESIZE              0x1109
#define IDD_TRANSFERRATE            0x1110
#define IDD_DIR                     0x1112
#define IDD_DISMISS                 0x1113
#define IDD_DNLDCOMPLETETEXT        0x1115
#define IDD_DNLDESTTIME             0x1116
#define IDD_DNLDTIME                0x1117

#define DLG_SAFEOPEN                0x1140
#define IDC_SAFEOPEN_EXPL           0x1142
#define IDC_SAFEOPEN_AUTOOPEN       0x1143
#define IDC_SAFEOPEN_AUTOSAVE       0x1144
#define IDC_SAFEOPEN_ALWAYS         0x1145

// Flavors of refresh
#define IDM_REFRESH_TOP             6041   // Normal refresh, topmost doc
#define IDM_REFRESH_THIS            6042   // Normal refresh, nearest doc
#define IDM_REFRESH_TOP_FULL        6043   // Full refresh, topmost doc
#define IDM_MENUEXT_PLACEHOLDER     6047
// placeholder for use with InsertMenu
#define IDM_LANGUAGE_PLACEHOLDER	6048 

#define IDS_CONFIRM_SCRIPT_CLOSE_TEXT	0x3035
#define IDS_NAVIGATEBACKTO              0x3170
#define IDS_NAVIGATEFORWARDTO           0x3171

#define DVIDM_OPEN           (FCIDM_SHVIEWFIRST + 0x100)
#define DVIDM_SAVE           (FCIDM_SHVIEWFIRST + 0x101)
#define DVIDM_PRINT          (FCIDM_SHVIEWFIRST + 0x104)
#define DVIDM_NEWWINDOW      (FCIDM_SHVIEWFIRST + 0x113)

// Form
#define IDR_ACCELS_SITE_DESIGN          41
#define IDR_ACCELS_SITE_RUN             40
#define IDR_ACCELS_FRAMESET_DESIGN      47
#define IDR_ACCELS_FRAMESET_RUN         46
#define IDR_ACCELS_INPUTTXT_DESIGN      43
#define IDR_ACCELS_INPUTTXT_RUN         42
#define IDR_ACCELS_TCELL_DESIGN         45
#define IDR_ACCELS_TCELL_RUN            44
#define IDR_ACCELS_BODY_RUN             48
#define IDR_ACCELS_BODY_DESIGN          49
#define IDR_ACCELS_TXTSITE_RUN          50
#define IDR_ACCELS_TXTSITE_DESIGN       51

// HTML Form
#define IDS_HTMLFORM_USERTYPESHORT      181
#define IDS_HTMLFORM_USERTYPEFULL       180

//+------------------------------------------------------------------------
//
//  Error strings
//
//-------------------------------------------------------------------------
#define IDS_MESSAGE_BOX_TITLE           2213    // Microsoft Forms
#define IDS_ERROR_SOLUTION              2214    // Solution:\n<0s>
#define IDS_EA_SETTING_PROPERTY         2216    // Could not set property ...
#define IDS_EA_GETTING_PROPERTY         2217    // Could not get property ...
#define IDS_EA_CALLING_METHOD           2326    // Could not call method ...
#define IDS_EE_INVALID_PROPERTY_VALUE   2218    // The value entered is not valid ..
#define IDS_ES_ENTER_VALUE_IN_RANGE     2220    // Enter a value between..
#define IDS_ES_ENTER_VALUE_GT_ZERO      2221    // Enter a value greater than
#define IDS_ES_ENTER_VALUE_GE_ZERO      2222    // Enter a value greater than
#define IDS_EE_SETNOTSUPPORTEDATRUNTIME 2321    // Set property is not support at runtime.
#define IDS_EE_METHODNOTAPPLICABLE      2324
#define IDS_ES_ENTER_PROPER_VALUE       2325    // Enter a proper value
#define IDS_EE_INVALIDPICTURETYPE       2227    // CTL_E_INVALIDPICTURETYPE mouse icon must be a mouse icon
#define IDS_EE_CANTMOVEFOCUSTOCTRL      2322    // can't move focus to control because...
#define IDS_EE_INVALIDPICTURE           2331    // CTL_E_INVALIDPICTURE
#define IDS_EE_FAIL                     2330    // E_FAIL
#define IDS_EE_UNEXPECTED               2329    // E_UNEXPECTED
#define IDS_EE_INVALIDARG               2336    // E_INVALIDARG
#define IDS_EE_INVALIDPROPERTYARRAYINDEX 2332   // CTL_E_INVALIDPROPERTYARRAYINDEX
#define IDS_EE_INVALIDPROPERTYVALUE     2333    // CTL_E_INVALIDPROPERTYVALUE
#define IDS_EE_OVERFLOW                 2334    // CTL_E_OVERFLOW
#define IDS_EE_PERMISSIONDENIED         2335    // CTL_E_PERMISSIONDENIED
#define IDS_MSG_SAVE_MODIFIED_OBJECT    2223    // Save modified object?

#define IDS_CTRLPROPERTIES              2229
#define IDS_NAMEDCTRLPROPERTIES         2230
#define IDS_EA_PASTE_CONTROL            2235
#define IDS_EA_INSERT_CONTROL           2236

#define IDS_UNKNOWN_ERROR               2215    // Unknown error <0x>
#define IDS_EE_CONTROLNEEDSFOCUS        2327    // The control needs to have the focus
#define IDS_EE_NOTLICENSED              2337    // CLASS_E_NOTLICENSED
#define IDS_EE_INVALIDPASTETARGET       2338    // CTL_E_INVALIDPASTETARGET
#define IDS_EE_INVALIDPASTESOURCE       2339    // CTL_E_INVALIDPASTESOURCE

#define IDS_UNKNOWN                     2340

#define IDS_EE_INTERNET_INVALID_URL         2341
#define IDS_EE_INTERNET_NAME_NOT_RESOLVED   2342
#define IDS_EE_MISMATCHEDTAG                2345    // CTL_E_MISMATCHEDTAG
#define IDS_EE_INCOMPATIBLEPOINTERS         2346    // CTL_E_INCOMPATIBLEPOINTERS
#define IDS_EE_UNPOSITIONEDPOINTER          2347    // CTL_E_UNPOSITIONEDPOINTER
#define IDS_EE_UNPOSITIONEDELEMENT          2348    // CTL_E_UNPOSITIONEDELEMENT

#define IDS_EDITVERB                    2210
#define IDS_PROPVERB                    2211

//----------------------------------------------------------------------------
//
// Generic property page (52xx)
//
//----------------------------------------------------------------------------

#define IDS_PPG_GENERIC             5211
#define IDS_PPG_INLINE_STYLE        5212

//----------------------------------------------------------------------------
//
// Misc strings
//
//----------------------------------------------------------------------------

//  The following IDS's must be kept in order, such that the
//  string for a given unit has the id IDS_UNITS_BASE + units

#define IDS_UNITS_BASE                   2240

#define IDS_UNITS_POINT                 (IDS_UNITS_BASE+2)

//----------------------------------------------------------------------------
//
// Undo strings
//
//----------------------------------------------------------------------------

#define IDS_UNDO                        (IDS_UNITS_POINT + 1)
#define IDS_REDO                        (IDS_UNDO + 1)
#define IDS_CANTUNDO                    (IDS_UNDO + 2)
#define IDS_CANTREDO                    (IDS_UNDO + 3)
#define IDS_UNDONEWCTRL                 (IDS_UNDO + 4)
#define IDS_UNDODELETE                  (IDS_UNDO + 5)
#define IDS_UNDOPROPCHANGE              (IDS_UNDO + 6)
#define IDS_UNDOMOVE                    (IDS_UNDO + 7)
#define IDS_UNDODRAGDROP                (IDS_UNDO + 9)
#define IDS_UNDOPASTE                   (IDS_UNDO + 15)
#define IDS_UNDOTYPING                  (IDS_UNDO + 16)
#define IDS_UNDOGENERICTEXT             (IDS_UNDO + 19)

#define IDS_E_CMDNOTSUPPORTED           2206

#define IDS_SITE_BASE                 7999
#define IDS_HTMLDEFAULTFONT          (IDS_SITE_BASE + 19)
#define IDS_RUNAWAYSCRIPT            (IDS_SITE_BASE + 29)
#define IDS_PROTECTEDFROMUNSAFEOCX   (IDS_SITE_BASE + 31)
#define IDS_PROTECTEDFROMOCXINIT     (IDS_SITE_BASE + 32)
#define IDS_REPOSTFORMDATA           (IDS_SITE_BASE + 33)
#define IDS_OCXDISABLED              (IDS_SITE_BASE + 34)
#define IDS_MISMATCHEDXML            (IDS_SITE_BASE + 35)
#define IDS_DEBUGCONTINUE            (IDS_SITE_BASE + 36)
#define IDS_FMTDEBUGCONTINUE         (IDS_SITE_BASE + 37)

#define IDS_ERR_SAVEPICTUREAS        (IDS_SITE_BASE + 26)
#define IDS_ERR_SETWALLPAPER         (IDS_SITE_BASE + 27)
#define IDS_ERR_SETDESKTOPITEM       (IDS_SITE_BASE + 38)


//+----------------------------------------------------------------------------
//
// string used by script window
//
//----------------------------------------------------------------------------

#define IDS_OMWINDOW_FIRST              8300
#define IDS_VAR2STR_VTERROR             (IDS_OMWINDOW_FIRST + 0)
#define IDS_VAR2STR_VTNULL              (IDS_OMWINDOW_FIRST + 1)
#define IDS_VAR2STR_VTBOOL_TRUE         (IDS_OMWINDOW_FIRST + 2)
#define IDS_VAR2STR_VTBOOL_FALSE        (IDS_OMWINDOW_FIRST + 3)

//+----------------------------------------------------------------------------
//
// string used in conversion GetIDsOfNames
//
//----------------------------------------------------------------------------

#define IDS_DISPID_FIRST                8200                       // matches:
#define IDS_DISPID_FONTNAME             (IDS_DISPID_FIRST +  1)    // DISPID_CommonCtrl_FONTNAME
#define IDS_DISPID_FONTSIZE             (IDS_DISPID_FIRST +  2)    // DISPID_CommonCtrl_FONTSIZE
#define IDS_DISPID_FONTBOLD             (IDS_DISPID_FIRST +  3)    // DISPID_CommonCtrl_FONTBOLD
#define IDS_DISPID_FONTITAL             (IDS_DISPID_FIRST +  4)    // DISPID_CommonCtrl_FONTITAL
#define IDS_DISPID_FONTUNDER            (IDS_DISPID_FIRST +  5)    // DISPID_CommonCtrl_FONTUNDER
#define IDS_DISPID_BACKCOLOR            (IDS_DISPID_FIRST +  7)    // DISPID_BACKCOLOR
#define IDS_DISPID_BORDERCOLOR          (IDS_DISPID_FIRST +  9)    // DISPID_BORDERCOLOR
#define IDS_DISPID_BORDERSTYLE          (IDS_DISPID_FIRST + 10)    // DISPID_BORDERSTYLE
#define IDS_DISPID_TEXTALIGN            (IDS_DISPID_FIRST + 11)    // DISPID_CommonCtrl_TextAlign
#define IDS_DISPID_SPECIALEFFECT        (IDS_DISPID_FIRST + 12)    // DISPID_CommonCtrl_SpecialEffect
#define IDS_DISPID_FONTSUPERSCRIPT      (IDS_DISPID_FIRST + 13)    // DISPID_CommonCtrl_FONTSUPERSCRIPT
#define IDS_DISPID_FONTSUBSCRIPT        (IDS_DISPID_FIRST + 14)    // DISPID_CommonCtrl_FONTSUBSCRIPT

//+----------------------------------------------------------------------------
//
//  Button caption constants
//
//----------------------------------------------------------------------------

#define IDS_BUTTONCAPTION_RESET         8500
#define IDS_BUTTONCAPTION_SUBMIT        8501
#define IDS_BUTTONCAPTION_UPLOAD        8502

//+----------------------------------------------------------------------------
//
//  Printing constants
//
//----------------------------------------------------------------------------

#define IDS_PRINT_URLTITLE              8400
#define IDS_PRINT_URLCOL1HEAD           8401
#define IDS_PRINT_URLCOL2HEAD           8402
#define IDS_DEFAULTHEADER               8403
#define IDS_DEFAULTFOOTER               8404
#define IDS_DEFAULTMARGINTOP            8405
#define IDS_DEFAULTMARGINBOTTOM         8406
#define IDS_DEFAULTMARGINLEFT           8407
#define IDS_DEFAULTMARGINRIGHT          8408

#define IDS_CANNOTLOAD                  8193
#define IDS_ONBEFOREUNLOAD_PREAMBLE     8194
#define IDS_ONBEFOREUNLOAD_POSTAMBLE    8197

#define IDS_DEFAULT_ISINDEX_PROMPT      8196


#define IDS_UNKNOWNPROTOCOL             2511    
#define IDS_SECURECONNECTIONINFO        2512
#define IDS_SECURE_LOW                  2513
#define IDS_SECURE_MEDIUM               2514
#define IDS_SECURE_HIGH                 2515
#define IDS_SECURESOURCE                2516

// Jave Script prompt() dialog
#define IDD_PROMPT_MSHTML               8131
#define IDC_PROMPT_PROMPT               8132
#define IDC_PROMPT_EDIT                 8133

#define IDS_PROPERTYOPENPICTURE         5010
#define IDS_PROPERTYOPENMOUSEICON       5011

#define IDS_HTMLFORM_SAVE               8114

#define IDS_SAVEPICTUREAS_GIF           8116
#define IDS_SAVEPICTUREAS_JPG           8117
#define IDS_SAVEPICTUREAS_BMP           8118
#define IDS_SAVEPICTUREAS_XBM           8119
#define IDS_SAVEPICTUREAS_ART           8120
#define IDS_SAVEPICTUREAS_WMF           8121
#define IDS_SAVEPICTUREAS_EMF           8122
#define IDS_SAVEPICTUREAS_AVI           8123
#define IDS_SAVEPICTUREAS_MPG           8124
#define IDS_SAVEPICTUREAS_MOV           8125
#define IDS_SAVEPICTUREAS_ORIGINAL      8126
#define IDS_UNTITLED_BITMAP             8127
#define IDS_UNTITLED_MSHTML             8128
#define IDS_WALLPAPER_BMP               8129
#define IDS_SAVEPICTUREAS_PNG           8138
#define IDS_UPLOADFILE                  5444

#define IDS_HELPABOUT_STRING            1017

#define IDS_NULL_TITLE                  1020

// default document security property
#define IDS_DEFAULT_DOC_SECURITY_PROP   8130

#define IDS_MAILTO_MAILCLIENTNOTFOUND   8601

// New Encoding Menu
#define RES_STRING_ENCODING_MORE        4700

#define IDS_WEBPAGEDIALOG               5301
#define IDS_CODEPAGE                    5302

#define RT_FILE                         2110

#define IDB_FOCUSRECT					2504
#define IDB_SCROLLADORNER				2505


//+----------------------------------------------------------------------------
//
// Progress status text strings
//
//-----------------------------------------------------------------------------

#define IDS_BINDSTATUS_DOWNLOADING                  8154
#define IDS_BINDSTATUS_DOWNLOADINGDATA_PICTURE      8155
#define IDS_BINDSTATUS_GENERATINGDATA_TEXT          8156
#define IDS_BINDSTATUS_DOWNLOADINGDATA_TEXT         8157
#define IDS_BINDSTATUS_INSTALLINGCOMPONENTS         8160
#define IDS_BINDSTATUS_DOWNLOADINGDATA_BITS         8167

#define IDS_DONE                                    8169

#define IDS_LOADINGTABLE                            8170
#define IDS_DATABINDING                             8171

#define IDS_FRIENDLYURL_SHORTCUTTO                  8172
#define IDS_FRIENDLYURL_AT                          8173
#define IDS_FRIENDLYURL_SENDSMAILTO                 8174
#define IDS_FRIENDLYURL_LOCAL                       8175
#define IDS_FRIENDLYURL_GOPHER                      8176
#define IDS_FRIENDLYURL_FTP                         8177
#define IDS_FRIENDLYURL_SECUREWEBSITE               8178

#endif //I_SHDOCLC_H_

