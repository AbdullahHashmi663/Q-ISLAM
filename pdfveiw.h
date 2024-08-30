#ifndef PDFVEIW_H
#define PDFVEIW_H

#include <QWidget>
#include <QApplication>
#include <QLabel>
#include <QVBoxLayout>

namespace Ui {
class Pdfveiw;
}

class Pdfveiw : public QWidget
{
    Q_OBJECT

public:
    explicit Pdfveiw(QWidget *parent = nullptr);
    ~Pdfveiw();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Pdfveiw *ui;
};

#endif // PDFVEIW_H


/*class PdfViewer : public QWidget {
public:
    PdfViewer(QWidget *parent = nullptr) : QWidget(parent) {
        initUI();
    }

    void loadPdf(const QString &filePath) {
        document = Poppler::Document::load(filePath);
        if (!document || document->isLocked()) {
            qWarning() << "Failed to load PDF document";
            return;
        }

        numPages = document->numPages();
        updatePage(0);
    }

private:
    void initUI() {
        layout = new QVBoxLayout(this);

        label = new QLabel(this);
        layout->addWidget(label);

        setLayout(layout);
        setWindowTitle("PDF Viewer");
    }

    void updatePage(int pageNumber) {
        if (!document) {
            return;
        }

        Poppler::Page *page = document->page(pageNumber);
        if (!page) {
            return;
        }

        const QImage image = page->renderToImage(100, 100);
        label->setPixmap(QPixmap::fromImage(image));

        delete page;
    }

    void keyPressEvent(QKeyEvent *event) override {
        switch (event->key()) {
        case Qt::Key_Left:
            currentPage = (currentPage - 1 + numPages) % numPages;
            updatePage(currentPage);
            break;
        case Qt::Key_Right:
            currentPage = (currentPage + 1) % numPages;
            updatePage(currentPage);
            break;
        default:
            QWidget::keyPressEvent(event);
        }
    }

    QVBoxLayout *layout;
    QLabel *label;
    Poppler::Document *document;
    int numPages;
    int currentPage = 0;
};

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    PdfViewer viewer;
    viewer.resize(800, 600);
    viewer.loadPdf("path/to/your/document.pdf");  // Replace with the actual path
    viewer.show();

    return app.exec();
}
*/
