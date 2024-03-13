#pragma once

#include "Question.h"


class ShortAnswerQuestion : public Question
{
public:
    ShortAnswerQuestion(const std::string& questionText,
                        const std::string& correctAnswer);
    virtual bool IsThisAnswerCorrect(const std::string& answer) const override;
    
protected:
    // nothing to add to this class
};
