[@bs.module "./Link.js"] [@react.component]
external make:
  (
    ~className: string=?,
    ~labelClassName: string=?,
    ~to_: string=?,
    ~label: string=?
  ) =>
  React.element =
  "default";