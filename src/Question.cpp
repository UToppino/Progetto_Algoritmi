#include "Question.h"
#include <iostream>
#include <fstream>
#include <ctype.h>
#include <string>
using namespace std;

Question::Question()
{
    //ctor
}

Question::~Question()
{
    //dtor
}

 void Question::setQuestionText(string text)
{
    _question_text = text;
}
