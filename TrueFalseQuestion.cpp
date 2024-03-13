#include "TrueFalseQuestion.h"


TrueFalseQuestion::TrueFalseQuestion(const std::string& questionText, const std::string &answerText)
    : MultipleChoiceQuestion(questionText,
      std::vector<std::string> {"True", "False"},
      answerText)
{
    // nothing here
}

bool TrueFalseQuestion::IsThisAnswerCorrect(const std::string& answer) const
{
    if (answer == CorrectAnswer)
    {
        return true;
    }
    if ((answer == "2") && (CorrectAnswer == "False"))
    {
        return true;
    }
    if ((answer == "1") && (CorrectAnswer == "True"))
    {
        return true;
    }
    return false;
}

