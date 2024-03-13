#include "ShortAnswerQuestion.h"


ShortAnswerQuestion::ShortAnswerQuestion(const std::string& questionText,
                                         const std::string& correctAnswer)
    : Question(questionText, correctAnswer)
{
   // nothing here
}

bool ShortAnswerQuestion::IsThisAnswerCorrect(const std::string &answer) const
{
    return answer == CorrectAnswer;
}
