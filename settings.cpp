#include "settings.h"
#include "ui_settings.h"

#include <cmath>

qreal Settings::FRICTION = pow(FRICTION_PER_SECOND, 1.0/FPS);

Settings::Settings(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);
}

Settings::~Settings()
{
    delete ui;
}

void Settings::on_openGLBox_toggled(bool checked)
{
    emit openGLToggled(checked);
}

void Settings::on_antialiasingBox_toggled(bool checked)
{
    emit antialiasingToggled(checked);
}
