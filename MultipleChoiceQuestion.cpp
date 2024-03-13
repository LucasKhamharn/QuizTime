#include "MultipleChoiceQuestion.h"
#include <iostream>


MultipleChoiceQuestion::MultipleChoiceQuestion(const std::string& questionText,
                                               const std::vector<std::string>& possibleAnswersText,
                                               const std::string& answerText)
    : Question(questionText, answerText),
      PossibleAnswers(possibleAnswersText)
{
    //nothing here
}

std::string MultipleChoiceQuestion::GetPossibleAnswersText() const
{
    std::string toReturn;
    int index = 1;
    
    for (const std::string& s : PossibleAnswers)
    {
        toReturn += std::to_string(index);
        toReturn +=  (") " + s + "\n");
        ++index;
    }
    return toReturn;
}

bool MultipleChoiceQuestion::IsThisAnswerCorrect(const std::string &answer) const
{
    if (answer == CorrectAnswer)
    {
        return true;
    }
    if (PossibleAnswers[std::stoi(CorrectAnswer) - 1] == answer)
    {
        return true;
    }
    
    return false;
}


