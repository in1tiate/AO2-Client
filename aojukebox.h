#ifndef AOJUKEBOX_H
#define AOJUKEBOX_H

#include "aoapplication.h"

#include <QLineEdit>
#include <QListWidget>
#include <QWidget>

class AOJukebox : public QWidget
{
  Q_OBJECT
public:
  explicit AOJukebox(QWidget *parent, AOApplication *p_ao_app);

  void set_tracks(QVector<track_type> &tracks);
private:
  AOApplication *ao_app;

  QListWidget *ui_music_list;
  QLineEdit *ui_search;

  QVector<track_type> track_list;

signals:
  void trackSelected(QString track);

public slots:
  void refresh();

private slots:
  void on_music_list_doubleClicked(QModelIndex index);
  void on_search_edited(QString);
};

#endif // AOJUKEBOX_H
