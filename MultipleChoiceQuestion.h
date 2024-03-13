#pragma once

#include "Question.h"
#include <vector>


class MultipleChoiceQuestion : public Question
{
public:
    MultipleChoiceQuestion(const std::string& questionText,
                           const std::vector<std::string>& possibleAnswersText,
                           const std::string& answerText);
    
    virtual std::string GetPossibleAnswersText() const override;
    
    virtual bool IsThisAnswerCorrect(const std::string& answer) const override;
    
protected:
    std::vector<std::string> PossibleAnswers;
};
