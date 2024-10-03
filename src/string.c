#include "stdy/string.h"

char SDStringCharAt(SDString * string, size_t index) {
    if (index >= SDStringLength(string)) {
        return '\0';
    } else {
        return string->value[index];
    }
}

SDString SDStringConcat(SDString * dest, SDString * src) {
    size_t new_length = dest->length + src->length;
    char * new_value  = (char *) malloc(new_length + 1);
}

SDString SDStringConcatChar(SDString * dest, char src);
bool SDStringContains(SDString * string, SDString substring);
bool SDStringContainsChar(SDString * string, char c);
bool SDStringEndsWith(SDString * string, SDString suffix);
bool SDStringEndsWithChar(SDString * string, char c);
size_t SDStringIndexOf(SDString * string, char c);
bool SDStringIsEmpty(SDString * string);
size_t SDStringLastIndexOf(SDString * string, char c);
size_t SDStringLength(SDString * string);
bool SDStringMatches(SDString * string, SDString regex);
SDString SDStringReplace(SDString * string, SDString regex, SDString replacement);
SDString SDStringSplit(SDString * string, SDString delimiter);
bool SDStringStartsWith(SDString * string, SDString prefix);
bool SDStringStartsWithChar(SDString * string, char c);
SDString SDStringSubstring(SDString * string, size_t start, size_t end);
SDString SDStringToLowerCase(SDString * string);
SDString SDStringToUpperCase(SDString * string);
SDString SDStringTrim(SDString * string);