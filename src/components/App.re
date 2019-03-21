module Styles = {
  open Css;

  let app = style([
    display(flexBox),
    justifyContent(center),
  ]);

  let title = style([
    color("3a3333"->hex),
  ]);
};


let component = ReasonReact.statelessComponent(__MODULE__);

let make = _ => {
  ...component,
  render: _ =>
    <div className=Styles.app>
      <h1 className=Styles.title>
        {"Welcome to your React App!"->ReasonReact.string}
      </h1>
    </div>
};
