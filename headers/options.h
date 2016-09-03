/*
 * © 2013-2016 Flo-Art.fr
 *
 * QRecipeWriter et l'ensemble de ses putils est fournit sous la licence Creative Common BY-NC-SA.
 * Toutes les modifications et la redistribution sont autorisés pour une utilisation NON COMMERCIALE.
 * Par ailleurs, les modifications et la reproduction doivent respecter les règles ci-dessous :
 *    - Cette en-tête doit être maintenue.
 *    - Vous devez redistribuer la version modifiée ou non sous licence Creative Common au moins autant
 *      restrictive.
 *    - Flo-Art.fr ne peut être tenu pour responsable des versions modifiées et/ou redistribuées.
 *    - Toute utilisation commerciale partielle ou complète est interdite.
 */

#ifndef OPTIONS_H
#define OPTIONS_H

#include "qrecipewriter.h"

#include <QDialog>
#include <QDialogButtonBox>
#include <QKeyEvent>

namespace Ui {
class Options;
}

class Options : public QDialog
{
    Q_OBJECT

public:
    explicit Options(QWidget *parent = 0);
    ~Options();

private:
    Ui::Options *ui;
public slots :
    void init();
    void saveXML(int activeServerConfig);

private slots:

    void on_buttonModifDefautImages_clicked();

    void on_buttonModifCommandeNavigateur_clicked();

    void on_buttonModifDossierTemp_clicked();

    void on_buttonModifDossierSauvegardes_clicked();

    void on_buttonModifEditeurImages_clicked();

    void on_buttonOptionsSupprimerDonneesPerso_clicked();

    void on_configActive_released();

    void on_configActive_2_released();

    void on_configActive_3_released();

    void on_configActive_4_released();

    void on_configActive_5_released();

    void on_backup_useLastOne_clicked();

    void on_img_useLastOne_clicked();

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    void keyPressEvent(QKeyEvent *e);
    void loadConfigsServer();
    int configActiveOpts;
};

#endif // OPTIONS_H