; // This is the header section.

MessageIdTypedef=DWORD

SeverityNames=(Success=0x0:STATUS_SEVERITY_SUCCESS
               Informational=0x1:STATUS_SEVERITY_INFORMATIONAL
               Warning=0x2:STATUS_SEVERITY_WARNING
               Error=0x3:STATUS_SEVERITY_ERROR
              )

FacilityNames=(System=0x0:FACILITY_SYSTEM
               Runtime=0x2:FACILITY_RUNTIME
               Stubs=0x3:FACILITY_STUBS
               Io=0x4:FACILITY_IO_ERROR_CODE
              )

LanguageNames=(English=0x409:MSG00409)
LanguageNames=(Ukrainian=0x422:MSG00422)
LanguageNames=(Russian=0x419:MSG00419)

; // The following are message definitions.


MessageId=0x1
Severity=Error
Facility=Runtime
SymbolicName=MSG_COMMON_ERROR
Language=English
Error:%r
%2
.
Language=Ukrainian
Помилка:%r
%2
.
Language=Russian
Ошибка:%r
%2
.
