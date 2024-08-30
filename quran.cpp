#include "quran.h"
#include "ui_quran.h"
//#include"feel.h"
//#include "ui_feel.h";
#include <QApplication>
#include <QMainWindow>
#include <QVBoxLayout>
#include <QComboBox>
#include<QMessageBox>
#include <QAbstractListModel>
#include"QFile"
#include"QTextStream"
#include"QMediaPlayer"
QMediaPlayer *audio1=new QMediaPlayer;
Quran::Quran(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Quran)
{
    ui->setupUi(this);
    QStringList surah_names;
    surah_names <<  "Al-Tein" << "At-Alaq" << "Al-Qaddar" << "Al-Bayyina" << "Al-Zilzaal" << "Al-Aadiyaat" << "Al-Qariya" << "Al-Takasur" << "Al-Asr" << "Al-Humazah" << "Al-Feel" << "Al-Quraish" << "Al-Maoon" << "Al-Kausar" << "Al-Kafiroon" << "An-Nasar" << "Al-Tabbat" << "Al-Ikhlaas" << "Al-Falak" << "Al-Naas";
    ui->comboBox->addItems(surah_names);
    connect(ui->comboBox,SIGNAL(activated(const QString &)),this,SLOT(on_comboBox_activated(const QString &)));
}

Quran::~Quran()
{
    delete ui;
}


void Quran::on_comboBox_activated(const QString &text )
{
    if(text=="Al-Feel")
    {
        ui->textBrowser->setAlignment(Qt::AlignCenter);
        ui->textBrowser_2->setAlignment(Qt::AlignCenter);
        ui->textBrowser_2->setText("بِسْمِ اللّٰهِ الرَّحْمٰنِ الرَّحِیْمِ \nاَلَمْ تَرَ كَیْفَ فَعَلَ رَبُّكَ بِاَصْحٰبِ الْفِیْلِؕ(۱)  اَلَمْ یَجْعَلْ كَیْدَهُمْ فِیْ تَضْلِیْلٍۙ(۲)  وَّ اَرْسَلَ عَلَیْهِمْ طَیْرًا اَبَابِیْلَۙ(۳)  تَرْمِیْهِمْ بِحِجَارَةٍ مِّنْ سِجِّیْلٍﭪ(۴)  فَجَعَلَهُمْ كَعَصْفٍ مَّاْكُوْلٍ۠(۵)");
        QFile file("C:\\Users\\THE STRANGER\\Desktop\\QURAN\\105.txt");
        ui->textBrowser->setAlignment(Qt::AlignCenter);
        if(!file.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",file.errorString());
        QTextStream in(&file);
        ui->textBrowser->setText(in.readAll());
        audio1->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/QURAN/feel.mp3"));
        audio1->play();
    }
    else if(text=="Al-Tein")
    {
        ui->textBrowser_2->setText("بِسْمِ اللّٰهِ الرَّحْمٰنِ الرَّحِیْمِ \nوَٱلتِّينِ وَٱلزَّيْتُونِ ١ وَطُورِ سِينِينَ ٢ وَهَـٰذَا ٱلْبَلَدِ ٱلْأَمِينِ ٣ لَقَدْ خَلَقْنَا ٱلْإِنسَـٰنَ فِىٓ أَحْسَنِ تَقْوِيمٍۢ ٤ ثُمَّ رَدَدْنَـٰهُ أَسْفَلَ سَـٰفِلِينَ ٥ إِلَّا ٱلَّذِينَ ءَامَنُوا۟ وَعَمِلُوا۟ ٱلصَّـٰلِحَـٰتِ فَلَهُمْ أَجْرٌ غَيْرُ مَمْنُونٍۢ ٦ فَمَا يُكَذِّبُكَ بَعْدُ بِٱلدِّينِ ٧ أَلَيْسَ ٱللَّهُ بِأَحْكَمِ ٱلْحَـٰكِمِينَ ٨)");
        QFile file("C:\\Users\\THE STRANGER\\Desktop\\QURAN\\95.txt");
        if(!file.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",file.errorString());
        QTextStream in(&file);
        ui->textBrowser->setText(in.readAll());
        audio1->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/QURAN/teen.mp3"));
        audio1->play();
    }
    else if(text=="Al-Alaq")
    {
        ui->textBrowser_2->setText("بِسْمِ اللّٰهِ الرَّحْمٰنِ الرَّحِیْمِ \nٱقْرَأْ بِٱسْمِ رَبِّكَ ٱلَّذِى خَلَقَ ١ خَلَقَ ٱلْإِنسَـٰنَ مِنْ عَلَقٍ ٢ ٱقْرَأْ وَرَبُّكَ ٱلْأَكْرَمُ ٣ ٱلَّذِى عَلَّمَ بِٱلْقَلَمِ ٤ عَلَّمَ ٱلْإِنسَـٰنَ مَا لَمْ يَعْلَمْ ٥ كَلَّآ إِنَّ ٱلْإِنسَـٰنَ لَيَطْغَىٰٓ ٦ أَن رَّءَاهُ ٱسْتَغْنَىٰٓ ٧ إِنَّ إِلَىٰ رَبِّكَ ٱلرُّجْعَىٰٓ ٨ أَرَءَيْتَ ٱلَّذِى يَنْهَىٰ ٩ عَبْدًا إِذَا صَلَّىٰٓ ١٠ أَرَءَيْتَ إِن كَانَ عَلَى ٱلْهُدَىٰٓ ١١ أَوْ أَمَرَ بِٱلتَّقْوَىٰٓ ١٢ أَرَءَيْتَ إِن كَذَّبَ وَتَوَلَّىٰٓ ١٣ أَلَمْ يَعْلَم بِأَنَّ ٱللَّهَ يَرَىٰ ١٤ كَلَّا لَئِن لَّمْ يَنتَهِ لَنَسْفَعًۢا بِٱلنَّاصِيَةِ ١٥ نَاصِيَةٍۢ كَـٰذِبَةٍ خَاطِئَةٍۢ ١٦ فَلْيَدْعُ نَادِيَهُۥ ١٧ سَنَدْعُ ٱلزَّبَانِيَةَ ١٨ كَلَّا لَا تُطِعْهُ وَٱسْجُدْ وَٱقْتَرِب ۩ ١٩)");
        QFile file("C:\\Users\\THE STRANGER\\Desktop\\QURAN\\96.txt");
        if(!file.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",file.errorString());
        QTextStream in(&file);
        ui->textBrowser->setText(in.readAll());
        audio1->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/QURAN/alaq.mp3"));
        audio1->play();
    }
    else if(text=="Al-Qaddar")
    {
        ui->textBrowser_2->setText("بِسْمِ اللّٰهِ الرَّحْمٰنِ الرَّحِیْمِ \nإِنَّآ أَنزَلْنَـٰهُ فِى لَيْلَةِ ٱلْقَدْرِ ١ وَمَآ أَدْرَىٰكَ مَا لَيْلَةُ ٱلْقَدْرِ ٢ لَيْلَةُ ٱلْقَدْرِ خَيْرٌۭ مِّنْ أَلْفِ شَهْرٍۢ ٣ تَنَزَّلُ ٱلْمَلَـٰٓئِكَةُ وَٱلرُّوحُ فِيهَا بِإِذْنِ رَبِّهِم مِّن كُلِّ أَمْرٍۢ ٤ سَلَـٰمٌ هِىَ حَتَّىٰ مَطْلَعِ ٱلْفَجْرِ ٨)");
        QFile file("C:\\Users\\THE STRANGER\\Desktop\\QURAN\\97.txt");
        if(!file.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",file.errorString());
        QTextStream in(&file);
        ui->textBrowser->setText(in.readAll());
        audio1->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/QURAN/qadar.mp3"));
        audio1->play();
    }
    else if(text=="Al-Bayyina")
    {
        ui->textBrowser_2->setText("بِسْمِ اللّٰهِ الرَّحْمٰنِ الرَّحِیْمِ \nلَمْ يَكُنِ ٱلَّذِينَ كَفَرُوا۟ مِنْ أَهْلِ ٱلْكِتَـٰبِ وَٱلْمُشْرِكِينَ مُنفَكِّينَ حَتَّىٰ تَأْتِيَهُمُ ٱلْبَيِّنَةُ ١ رَسُولٌۭ مِّنَ ٱللَّهِ يَتْلُوا۟ صُحُفًۭا مُّطَهَّرَةًۭ ٢ فِيهَا كُتُبٌۭ قَيِّمَةٌۭ ٣ وَمَا تَفَرَّقَ ٱلَّذِينَ أُوتُوا۟ ٱلْكِتَـٰبَ إِلَّا مِنۢ بَعْدِ مَا جَآءَتْهُمُ ٱلْبَيِّنَةُ ٤ وَمَآ أُمِرُوٓا۟ إِلَّا لِيَعْبُدُوا۟ ٱللَّهَ مُخْلِصِينَ لَهُ ٱلدِّينَ حُنَفَآءَ وَيُقِيمُوا۟ ٱلصَّلَوٰةَ وَيُؤْتُوا۟ ٱلزَّكَوٰةَ ۚ وَذَٰلِكَ دِينُ ٱلْقَيِّمَةِ ٥ إِنَّ ٱلَّذِينَ كَفَرُوا۟ مِنْ أَهْلِ ٱلْكِتَـٰبِ وَٱلْمُشْرِكِينَ فِى نَارِ جَهَنَّمَ خَـٰلِدِينَ فِيهَآ ۚ أُو۟لَـٰٓئِكَ هُمْ شَرُّ ٱلْبَرِيَّةِ ٦ إِنَّ ٱلَّذِينَ ءَامَنُوا۟ وَعَمِلُوا۟ ٱلصَّـٰلِحَـٰتِ أُو۟لَـٰٓئِكَ هُمْ خَيْرُ ٱلْبَرِيَّةِ ٧ جَزَآؤُهُمْ عِندَ رَبِّهِمْ جَنَّـٰتُ عَدْنٍۢ تَجْرِى مِن تَحْتِهَا ٱلْأَنْهَـٰرُ خَـٰلِدِينَ فِيهَآ أَبَدًۭا ۖ رَّضِىَ ٱللَّهُ عَنْهُمْ وَرَضُوا۟ عَنْهُ ۚ ذَٰلِكَ لِمَنْ خَشِىَ رَبَّهُۥ ٨)");
        QFile file("C:\\Users\\THE STRANGER\\Desktop\\QURAN\\98.txt");
        if(!file.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",file.errorString());
        QTextStream in(&file);
        ui->textBrowser->setText(in.readAll());
        audio1->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/QURAN/bayyinah.mp3"));
        audio1->play();
    }
    else if(text=="Al-Zilzaal")
    {
        ui->textBrowser_2->setText("بِسْمِ اللّٰهِ الرَّحْمٰنِ الرَّحِیْمِ \nإِذَا زُلْزِلَتِ ٱلْأَرْضُ زِلْزَالَهَا ١ وَأَخْرَجَتِ ٱلْأَرْضُ أَثْقَالَهَا ٢ وَقَالَ ٱلْإِنسَـٰنُ مَا لَهَا ٣ يَوْمَئِذٍۢ تُحَدِّثُ أَخْبَارَهَا ٤ بِأَنَّ رَبَّكَ أَوْحَىٰ لَهَا ٥ يَوْمَئِذٍۢ يَصْدُرُ ٱلنَّاسُ أَشْتَاتًۭا لِّيُرَوْا۟ أَعْمَـٰلَهُمْ ٦ فَمَن يَعْمَلْ مِثْقَالَ ذَرَّةٍ خَيْرًۭا يَرَهُۥ ٧ وَمَن يَعْمَلْ مِثْقَالَ ذَرَّةٍۢ شَرًّۭا يَرَهُۥ  ٨)");
        QFile file("C:\\Users\\THE STRANGER\\Desktop\\QURAN\\99.txt");
        if(!file.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",file.errorString());
        QTextStream in(&file);
        ui->textBrowser->setText(in.readAll());
        audio1->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/QURAN/zilzaal.mp3"));
        audio1->play();
    }
    else if(text=="Al-Aadiyaat")
    {
        ui->textBrowser_2->setText("بِسْمِ اللّٰهِ الرَّحْمٰنِ الرَّحِیْمِ \nوَٱلْعَـٰدِيَـٰتِ ضَبْحًۭا ١ فَٱلْمُورِيَـٰتِ قَدْحًۭا ٢ فَٱلْمُغِيرَٰتِ صُبْحًۭا ٣ فَأَثَرْنَ بِهِۦ نَقْعًۭا ٤ فَوَسَطْنَ بِهِۦ جَمْعًا ٥ إِنَّ ٱلْإِنسَـٰنَ لِرَبِّهِۦ لَكَنُودٌۭ ٦ وَإِنَّهُۥ عَلَىٰ ذَٰلِكَ لَشَهِيدٌۭ ٧ وَإِنَّهُۥ لِحُبِّ ٱلْخَيْرِ لَشَدِيدٌ ٨ ۞ أَفَلَا يَعْلَمُ إِذَا بُعْثِرَ مَا فِى ٱلْقُبُورِ ٩ وَحُصِّلَ مَا فِى ٱلصُّدُورِ ١٠ إِنَّ رَبَّهُم بِهِمْ يَوْمَئِذٍۢ لَّخَبِيرٌۢ ١١ ٨)");
        QFile file("C:\\Users\\THE STRANGER\\Desktop\\QURAN\\100.txt");
        if(!file.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",file.errorString());
        QTextStream in(&file);
        ui->textBrowser->setText(in.readAll());
        audio1->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/QURAN/adiyat.mp3"));
        audio1->play();
    }
    else if(text=="Al-Qariya")
    {
        ui->textBrowser_2->setText("بِسْمِ اللّٰهِ الرَّحْمٰنِ الرَّحِیْمِ \n  ٱلْقَارِعَةُ ١ مَا ٱلْقَارِعَةُ ٢ وَمَآ أَدْرَىٰكَ مَا ٱلْقَارِعَةُ ٣ يَوْمَ يَكُونُ ٱلنَّاسُ كَٱلْفَرَاشِ ٱلْمَبْثُوثِ ٤ وَتَكُونُ ٱلْجِبَالُ كَٱلْعِهْنِ ٱلْمَنفُوشِ ٥ فَأَمَّا مَن ثَقُلَتْ مَوَٰزِينُهُۥ ٦ فَهُوَ فِى عِيشَةٍۢ رَّاضِيَةٍۢ ٧ وَأَمَّا مَنْ خَفَّتْ مَوَٰزِينُهُۥ ٨ فَأُمُّهُۥ هَاوِيَةٌۭ ٩ وَمَآ أَدْرَىٰكَ مَا هِيَهْ ١٠ نَارٌ حَامِيَةٌۢ ١١  ");
        QFile file("C:\\Users\\THE STRANGER\\Desktop\\QURAN\\101.txt");
        if(!file.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",file.errorString());
        QTextStream in(&file);
        ui->textBrowser->setText(in.readAll());
        audio1->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/QURAN/qariah.mp3"));
        audio1->play();
    }
    else if(text=="Al-Takasur")
    {
        ui->textBrowser_2->setText("بِسْمِ اللّٰهِ الرَّحْمٰنِ الرَّحِیْمِ \n  أَلْهَىٰكُمُ ٱلتَّكَاثُرُ ١ حَتَّىٰ زُرْتُمُ ٱلْمَقَابِرَ ٢ كَلَّا سَوْفَ تَعْلَمُونَ ٣ ثُمَّ كَلَّا سَوْفَ تَعْلَمُونَ ٤ كَلَّا لَوْ تَعْلَمُونَ عِلْمَ ٱلْيَقِينِ ٥ لَتَرَوُنَّ ٱلْجَحِيمَ ٦ ثُمَّ لَتَرَوُنَّهَا عَيْنَ ٱلْيَقِينِ ٧ ثُمَّ لَتُسْـَٔلُنَّ يَوْمَئِذٍ عَنِ ٱلنَّعِيمِ ٨  ");
        QFile file("C:\\Users\\THE STRANGER\\Desktop\\QURAN\\102.txt");
        if(!file.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",file.errorString());
        QTextStream in(&file);
        ui->textBrowser->setText(in.readAll());
        audio1->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/QURAN/takasur.mp3"));
        audio1->play();
    }
    else if(text=="Al-Asr")
    {
        ui->textBrowser_2->setText("بِسْمِ اللّٰهِ الرَّحْمٰنِ الرَّحِیْمِ \n  وَٱلْعَصْرِ ١ إِنَّ ٱلْإِنسَـٰنَ لَفِى خُسْرٍ ٢ إِلَّا ٱلَّذِينَ ءَامَنُوا۟ وَعَمِلُوا۟ ٱلصَّـٰلِحَـٰتِ وَتَوَاصَوْا۟ بِٱلْحَقِّ وَتَوَاصَوْا۟ بِٱلصَّبْرِ ٣  ");
        QFile file("C:\\Users\\THE STRANGER\\Desktop\\QURAN\\103.txt");
        if(!file.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",file.errorString());
        QTextStream in(&file);
        ui->textBrowser->setText(in.readAll());
        audio1->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/QURAN/asr.mp3"));
        audio1->play();
    }
    else if(text=="Al-Humazah")
    {
        ui->textBrowser_2->setText("بِسْمِ اللّٰهِ الرَّحْمٰنِ الرَّحِیْمِ \n   وَيْلٌۭ لِّكُلِّ هُمَزَةٍۢ لُّمَزَةٍ ١ ٱلَّذِى جَمَعَ مَالًۭا وَعَدَّدَهُۥ ٢ يَحْسَبُ أَنَّ مَالَهُۥٓ أَخْلَدَهُۥ ٣ كَلَّا ۖ لَيُنۢبَذَنَّ فِى ٱلْحُطَمَةِ ٤ وَمَآ أَدْرَىٰكَ مَا ٱلْحُطَمَةُ ٥ نَارُ ٱللَّهِ ٱلْمُوقَدَةُ ٦ ٱلَّتِى تَطَّلِعُ عَلَى ٱلْأَفْـِٔدَةِ ٧ إِنَّهَا عَلَيْهِم مُّؤْصَدَةٌۭ ٨ فِى عَمَدٍۢ مُّمَدَّدَةٍۭ   ");
        QFile file("C:\\Users\\THE STRANGER\\Desktop\\QURAN\\104.txt");
        if(!file.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",file.errorString());
        QTextStream in(&file);
        ui->textBrowser->setText(in.readAll());
        audio1->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/QURAN/humazah.mp3"));
        audio1->play();
    }
        else if(text=="Al-Quraish")
    {
        ui->textBrowser_2->setText("بِسْمِ اللّٰهِ الرَّحْمٰنِ الرَّحِیْمِ \n   لِإِيلَـٰفِ قُرَيْشٍ ١ إِۦلَـٰفِهِمْ رِحْلَةَ ٱلشِّتَآءِ وَٱلصَّيْفِ ٢ فَلْيَعْبُدُوا۟ رَبَّ هَـٰذَا ٱلْبَيْتِ ٣ ٱلَّذِىٓ أَطْعَمَهُم مِّن جُوعٍۢ وَءَامَنَهُم مِّنْ خَوْفٍۭ ٤   ");
        QFile file("C:\\Users\\THE STRANGER\\Desktop\\QURAN\\106.txt");
        if(!file.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",file.errorString());
        QTextStream in(&file);
        ui->textBrowser->setText(in.readAll());
        audio1->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/QURAN/quraish.mp3"));
        audio1->play();
    }
    else if(text=="Al-Maoon")
    {
        ui->textBrowser_2->setText("بِسْمِ اللّٰهِ الرَّحْمٰنِ الرَّحِیْمِ \n   أَرَءَيْتَ ٱلَّذِى يُكَذِّبُ بِٱلدِّينِ ١ فَذَٰلِكَ ٱلَّذِى يَدُعُّ ٱلْيَتِيمَ ٢ وَلَا يَحُضُّ عَلَىٰ طَعَامِ ٱلْمِسْكِينِ ٣ فَوَيْلٌۭ لِّلْمُصَلِّينَ ٤ ٱلَّذِينَ هُمْ عَن صَلَاتِهِمْ سَاهُونَ ٥ ٱلَّذِينَ هُمْ يُرَآءُونَ ٦ وَيَمْنَعُونَ ٱلْمَاعُونَ ٤   ");
        QFile file("C:\\Users\\THE STRANGER\\Desktop\\QURAN\\107.txt");
        if(!file.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",file.errorString());
        QTextStream in(&file);
        ui->textBrowser->setText(in.readAll());
        audio1->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/QURAN/akmaun.mp3"));
        audio1->play();
    }
    else if(text=="Al-Kausar")
    {
        ui->textBrowser_2->setText("بِسْمِ اللّٰهِ الرَّحْمٰنِ الرَّحِیْمِ \n   إِنَّآ أَعْطَيْنَـٰكَ ٱلْكَوْثَرَ ١ فَصَلِّ لِرَبِّكَ وَٱنْحَرْ ٢ إِنَّ شَانِئَكَ هُوَ ٱلْأَبْتَرُ ٣   ");
        QFile file("C:\\Users\\THE STRANGER\\Desktop\\QURAN\\108.txt");
        if(!file.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",file.errorString());
        QTextStream in(&file);
        ui->textBrowser->setText(in.readAll());
        audio1->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/QURAN/kausar.mp3"));
        audio1->play();
    }
    else if(text=="Al-Kafiroon")
    {
        ui->textBrowser_2->setText("بِسْمِ اللّٰهِ الرَّحْمٰنِ الرَّحِیْمِ \n   قُلْ يَـٰٓأَيُّهَا ٱلْكَـٰفِرُونَ ١ لَآ أَعْبُدُ مَا تَعْبُدُونَ ٢ وَلَآ أَنتُمْ عَـٰبِدُونَ مَآ أَعْبُدُ ٣ وَلَآ أَنَا۠ عَابِدٌۭ مَّا عَبَدتُّمْ ٤ وَلَآ أَنتُمْ عَـٰبِدُونَ مَآ أَعْبُدُ ٥ لَكُمْ دِينُكُمْ وَلِىَ دِينِ  ٣   ");
        QFile file("C:\\Users\\THE STRANGER\\Desktop\\QURAN\\109.txt");
        if(!file.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",file.errorString());
        QTextStream in(&file);
        ui->textBrowser->setText(in.readAll());
        audio1->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/QURAN/kafiroon.mp3"));
        audio1->play();
    }
    else if(text=="An-Nasar")
    {
        ui->textBrowser_2->setText("بِسْمِ اللّٰهِ الرَّحْمٰنِ الرَّحِیْمِ \n   إِذَا جَآءَ نَصْرُ ٱللَّهِ وَٱلْفَتْحُ ١ وَرَأَيْتَ ٱلنَّاسَ يَدْخُلُونَ فِى دِينِ ٱللَّهِ أَفْوَاجًۭا ٢ فَسَبِّحْ بِحَمْدِ رَبِّكَ وَٱسْتَغْفِرْهُ ۚ إِنَّهُۥ كَانَ تَوَّابًۢا ٣   ");
        QFile file("C:\\Users\\THE STRANGER\\Desktop\\QURAN\\110.txt");
        if(!file.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",file.errorString());
        QTextStream in(&file);
        ui->textBrowser->setText(in.readAll());
        audio1->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/QURAN/Nasr.mp3"));
        audio1->play();
    }
    else if(text=="Al-Tabbat")
    {
        ui->textBrowser_2->setText("بِسْمِ اللّٰهِ الرَّحْمٰنِ الرَّحِیْمِ \n   تَبَّتْ يَدَآ أَبِى لَهَبٍۢ وَتَبَّ ١ مَآ أَغْنَىٰ عَنْهُ مَالُهُۥ وَمَا كَسَبَ ٢ سَيَصْلَىٰ نَارًۭا ذَاتَ لَهَبٍۢ ٣ وَٱمْرَأَتُهُۥ حَمَّالَةَ ٱلْحَطَبِ ٤ فِى جِيدِهَا حَبْلٌۭ مِّن مَّسَدٍۭ ٥   ");
        QFile file("C:\\Users\\THE STRANGER\\Desktop\\QURAN\\111.txt");
        if(!file.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",file.errorString());
        QTextStream in(&file);
        ui->textBrowser->setText(in.readAll());
        audio1->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/QURAN/tabbat.mp3"));
        audio1->play();
    }
    else if(text=="Al-Ikhlaas")
    {
        ui->textBrowser_2->setText("بِسْمِ اللّٰهِ الرَّحْمٰنِ الرَّحِیْمِ \n   قُلْ هُوَ ٱللَّهُ أَحَدٌ ١ ٱللَّهُ ٱلصَّمَدُ ٢ لَمْ يَلِدْ وَلَمْ يُولَدْ ٣ وَلَمْ يَكُن لَّهُۥ كُفُوًا أَحَدٌۢ ٤   ");
        QFile file("C:\\Users\\THE STRANGER\\Desktop\\QURAN\\112.txt");
        if(!file.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",file.errorString());
        QTextStream in(&file);
        ui->textBrowser->setText(in.readAll());
        audio1->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/QURAN/ikhlaas.mp3"));
        audio1->play();
    }
    else if(text=="Al-Naas")
    {
        ui->textBrowser_2->setText("بِسْمِ اللّٰهِ الرَّحْمٰنِ الرَّحِیْمِ \n   قُلْ أَعُوذُ بِرَبِّ ٱلنَّاسِ ١ مَلِكِ ٱلنَّاسِ ٢ إِلَـٰهِ ٱلنَّاسِ ٣ مِن شَرِّ ٱلْوَسْوَاسِ ٱلْخَنَّاسِ ٤ ٱلَّذِى يُوَسْوِسُ فِى صُدُورِ ٱلنَّاسِ ٥ مِنَ ٱلْجِنَّةِ وَٱلنَّاسِ ٦ ");
        QFile file("C:\\Users\\THE STRANGER\\Desktop\\QURAN\\114.txt");
        if(!file.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",file.errorString());
        QTextStream in(&file);
        ui->textBrowser->setText(in.readAll());
        audio1->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/QURAN/Naas.mp3"));
        audio1->play();
    }
    else if(text=="Al-Falak")
    {
        ui->textBrowser_2->setText("بِسْمِ اللّٰهِ الرَّحْمٰنِ الرَّحِیْمِ \n   قُلْ أَعُوذُ بِرَبِّ ٱلْفَلَقِ ١ مِن شَرِّ مَا خَلَقَ ٢ وَمِن شَرِّ غَاسِقٍ إِذَا وَقَبَ ٣ وَمِن شَرِّ ٱلنَّفَّـٰثَـٰتِ فِى ٱلْعُقَدِ ٤ وَمِن شَرِّ حَاسِدٍ إِذَا حَسَدَ ٥   ");
        QFile file("C:\\Users\\THE STRANGER\\Desktop\\QURAN\\113.txt");
        if(!file.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",file.errorString());
        QTextStream in(&file);
        ui->textBrowser->setText(in.readAll());
        audio1->setMedia(QUrl("C:/Users/THE STRANGER/Desktop/QURAN/falak.mp3"));
        audio1->play();
    }

}

