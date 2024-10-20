# manim_project
creating animation project using manim

## install manim

### 1. virtualenv 설치
1. virtualenv install
   `python -m pip install --user -U virtualenv`
2. create vitualenv
   * `virtualenv env`
   * or `python -m virtualenv env`
   * env 폴더에 가상환경 설치

3. activate virtualenv
   * Window `source ./env/Scripts/activate`
   * Linux/Mac `source ./env/bin/activate`

4. deactivate virtualenv
   * `deactivate`

### 2. manim 설치
0. install package
   * latex
   * manim
   * ffmpeg
1. install latex
   `pip install latex`
2. install manim
   `pip install manim`
3. install ffmpeg (with Window)
   * ffmpeg 수동 설치 : https://ffmpeg.org/download.html#build-windows
   * 시스템 속성 -> 환경 변수 -> Path 값 추가
   * `~\ffmpeg\bin` 추가

### 3. manim 실행 테스트
* Test manim
  `manim`
1. Command method : executed manim custorm python file
  * `manim -pql *.py outfile`
    * *.py : custorm python file
    * outfile : 영상 파일 명
    * flag option
      * p : 즉시 영상 실행
      * ql : low quilty 영상 생성
      * 영상 퀄리티 설정
        * `qk` : fourk_quality - "2160p60"
        * `qp` : production_quality - "1440p60"
        * `qh` : high_quality - "1080p60"
        * `qm` : medium_quality - "720p30"
        * `ql` : low_quality - "480p15"
    * --format gif : gif 파일 생성

2. VScode Extension : Manim Sideview
   * intrepter setting - `./env/Scripts/python.exe`


## References
* virtualenv 설치 참고 : https://jaemunbro.medium.com/python-virtualenv-venv-%EC%84%A4%EC%A0%95-aaf0e7c2d24e
  * virtualenv 에러 관련 : https://codesample-factory.tistory.com/677
* manim 설치 가이드 : https://sine-qua-none.tistory.com/131
* manim 공식홈페이지 가이드 : https://docs.manim.community/en/stable/installation/windows.html
  * manim 실행 가이드 : https://docs.manim.community/en/stable/tutorials/output_and_config.html