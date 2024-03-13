#pragma once

#include "MultipleChoiceQuestion.h"


class TrueFalseQuestion : public MultipleChoiceQuestion
{
public:
    TrueFalseQuestion(const std::string& question,
                      const std::string& answerText);
    
    virtual bool IsThisAnswerCorrect(const std::string& answer) const override;
    
protected:
};
