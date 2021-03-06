//---------------------------------------------------------------------------
#pragma once
//---------------------------------------------------------------------------


namespace tst
{

  /*
      Интерфейс записи/ восстановления объекта в поток:
  */
  class i_marshal
  {
  public:

    // сохраняем объект в поток:
    virtual void save_to_stream(/*здесь какой-то поток. Бинарный, json...*/) const = 0;

    // загружаем объект из потока
    virtual void load_from_stream(/*здесь какой-то поток. Бинарный, json...*/) = 0;

  };

};
//---------------------------------------------------------------------------