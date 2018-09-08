#ifndef OPENGLSPACE_H
#define OPENGLSPACE_H

#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QMatrix4x4>
#include <QtGui/QOpenGLShaderProgram>

class OpenGlSpace : public QOpenGLWidget, QOpenGLFunctions
{
    Q_OBJECT
public:
    explicit OpenGlSpace(QWidget* parent = 0);

protected:
    void initializeGL() Q_DECL_OVERRIDE;
    void paintGL() Q_DECL_OVERRIDE;
    void resizeGL(int w, int h) Q_DECL_OVERRIDE;

private:
    QMatrix4x4 m_projection;

    GLuint m_posAttr;
    GLuint m_colAttr;
    GLuint m_matrixUniform;

    QOpenGLShaderProgram *m_program;

    int m_frame;
};

#endif // OPENGLSPACE_H
