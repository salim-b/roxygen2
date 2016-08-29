// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// findEndOfTag
int findEndOfTag(std::string string, bool is_code);
RcppExport SEXP roxygen2_findEndOfTag(SEXP stringSEXP, SEXP is_codeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type string(stringSEXP);
    Rcpp::traits::input_parameter< bool >::type is_code(is_codeSEXP);
    __result = Rcpp::wrap(findEndOfTag(string, is_code));
    return __result;
END_RCPP
}
// rdComplete
bool rdComplete(std::string string, bool is_code);
RcppExport SEXP roxygen2_rdComplete(SEXP stringSEXP, SEXP is_codeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type string(stringSEXP);
    Rcpp::traits::input_parameter< bool >::type is_code(is_codeSEXP);
    __result = Rcpp::wrap(rdComplete(string, is_code));
    return __result;
END_RCPP
}
// leadingSpaces
IntegerVector leadingSpaces(CharacterVector lines);
RcppExport SEXP roxygen2_leadingSpaces(SEXP linesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type lines(linesSEXP);
    __result = Rcpp::wrap(leadingSpaces(lines));
    return __result;
END_RCPP
}
// tokenise_preref
List tokenise_preref(CharacterVector lines, std::string file, int offset);
RcppExport SEXP roxygen2_tokenise_preref(SEXP linesSEXP, SEXP fileSEXP, SEXP offsetSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type lines(linesSEXP);
    Rcpp::traits::input_parameter< std::string >::type file(fileSEXP);
    Rcpp::traits::input_parameter< int >::type offset(offsetSEXP);
    __result = Rcpp::wrap(tokenise_preref(lines, file, offset));
    return __result;
END_RCPP
}
// find_includes
CharacterVector find_includes(std::string path);
RcppExport SEXP roxygen2_find_includes(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    __result = Rcpp::wrap(find_includes(path));
    return __result;
END_RCPP
}
// splitByWhitespace
std::vector<std::string> splitByWhitespace(std::string string);
RcppExport SEXP roxygen2_splitByWhitespace(SEXP stringSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type string(stringSEXP);
    __result = Rcpp::wrap(splitByWhitespace(string));
    return __result;
END_RCPP
}
// wrapString
std::string wrapString(std::string string, int width, int indent);
RcppExport SEXP roxygen2_wrapString(SEXP stringSEXP, SEXP widthSEXP, SEXP indentSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type string(stringSEXP);
    Rcpp::traits::input_parameter< int >::type width(widthSEXP);
    Rcpp::traits::input_parameter< int >::type indent(indentSEXP);
    __result = Rcpp::wrap(wrapString(string, width, indent));
    return __result;
END_RCPP
}
