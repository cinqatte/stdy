#ifndef CR_STRING_H
#define CR_STRING_H

#include "stdy/common.h"

typedef struct CRString {
    char * value;
    int32_t length;
} CRString;

char CRStringCharAt(CRString * string, int32_t index);
void CRStringConcat(CRString * dest, CRString * src);
void CRStringConcatChar(CRString * dest, char src);
bool CRStringContains(CRString * string, CRString * substring);
bool CRStringContainsChar(CRString * string, char c);
bool CRStringEndsWith(CRString * string, CRString * suffix);
bool CRStringEndsWithChar(CRString * string, char c);
int32_t CRStringIndexOf(CRString * string, char c);
bool CRStringIsEmpty(CRString * string);
int32_t CRStringLastIndexOf(CRString * string, char c);
int32_t CRStringLength(CRString * string);
bool CRStringMatches(CRString * string, CRString * regex);
CRString CRStringReplace(CRString * string, CRString * regex, CRString * replacement);
CRString CRStringSplit(CRString * string, CRString * delimiter);
bool CRStringStartsWith(CRString * string, CRString * prefix);
bool CRStringStartsWithChar(CRString * string, char c);
CRString CRStringSubstring(CRString * string, int32_t start, int32_t end);
CRString CRStringToLowerCase(CRString * string);
CRString CRStringToUpperCase(CRString * string);
CRString CRStringTrim(CRString * string);
CRString CRStringInsert(CRString *string, int32_t index, CRString * insertion);
CRString CRStringDelete(CRString *string, int32_t start, int32_t end);
CRString CRStringReverse(CRString *string);
int32_t CRStringFind(CRString *string, CRString *substring);
CRString CRStringToLower(CRString *string);
bool CRStringEquals(CRString *string1, CRString *string2);
int32_t CRStringCompare(CRString *string1, CRString *string2);

#endif /* CR_STRING_H */
