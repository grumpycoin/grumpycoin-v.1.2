#ifndef GRUMPYCOINADDRESSVALIDATOR_H
#define GRUMPYCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base48 entry widget validator.
   Corrects near-miss characters and refuses characters that are no part of base48.
 */
class GrumpyCoinAddressValidator : public QValidator
{
    Q_OBJECT

public:
    explicit GrumpyCoinAddressValidator(QObject *parent = 0);

    State validate(QString &input, int &pos) const;

    static const int MaxAddressLength = 35;
};

#endif // GRUMPYCOINADDRESSVALIDATOR_H
